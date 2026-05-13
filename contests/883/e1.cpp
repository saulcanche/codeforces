#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(ll a, ll b) {
    long long res = 1;
    while (b) {
        if(res > 1e18 / a) return LLONG_MAX;
        if (b & 1) res = res * a;
        b >>= 1;
        if(b) {
            if(a > 1e18 / a) return LLONG_MAX;
            a = a * a;
        }
    }
    return res;
}
ll f(ll a, ll b){
    ll powab = binpow(a, b);
    if(powab == LLONG_MAX) return LLONG_MAX;
    return (powab - a)/(a-1) + 1;
}
void solve(){
    ll n;
    cin >> n;
    bool isP = false;
    for(ll i = 2; i < 20; i++){ 
        ll l = 2, r = n/2;
        while(l <= r){
            ll m = (l + r)/2;
            ll s = f(m, i);
            if(s == LLONG_MAX) { r = m - 1; continue; }
            if(s == n){
                isP = true;
                break;
            } else if(s < n) l = m+1;
            else r = m-1;
        }
        if(isP) break;
    }
    cout << (isP ? "YES": "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}

