#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    
    vector<ll> subA;
    ll c = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] <= q) c++;
        else {
            if(c >= k) subA.push_back(c);
            c = 0;
        }
    }
    if(c >= k) subA.push_back(c);
    ll ans = 0;
    for(ll x: subA) ans += (x - k + 1) * (x - k + 2) / 2;
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();
}