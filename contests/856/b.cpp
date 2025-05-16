#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    for(ll i = 0; i < n; i++) if(a[i] == 1) a[i]++;
    for(ll i = 1; i< n; i++) if(a[i] % a[i-1] == 0) a[i]++;
    for(ll x: a) cout << x << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}