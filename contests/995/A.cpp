#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    ll ans = 0;
    for(ll i = 0; i < n-1 ; i++) ans += max((ll)0, a[i] - b[i+1]);
    ans += a.back();
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}