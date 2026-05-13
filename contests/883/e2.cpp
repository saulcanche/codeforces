#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll safe_mul(ll a, ll b, ll limit) {
    if(a == 0 || b == 0) return 0;
    if(a > limit / b) return limit + 1;
    return a * b;
}
ll binpow(ll a, ll b, ll limit) {
    ll res = 1;
    while(b) {
        if(b & 1) {
            res = safe_mul(res, a, limit);
            if(res > limit) return limit + 1;
        }
        b >>= 1;
        if(b) {
            a = safe_mul(a, a, limit);
            if(a > limit) return limit + 1;
        }
    }
    return res;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll safe_mul(ll a, ll b, ll limit) {
    if(a == 0 || b == 0) return 0;
    if(a > limit / b) return limit + 1;
    return a * b;
}
ll binpow(ll a, ll b, ll limit) {
    ll res = 1;
    while(b) {
        if(b & 1) {
            res = safe_mul(res, a, limit);
            if(res > limit) return limit + 1;
        }
        b >>= 1;
        if(b) {
            a = safe_mul(a, a, limit);
            if(a > limit) return limit + 1;
        }
    }
    return res;
}
ll f(ll a, ll b, ll n){
    ll powab = binpow(a, b, n*(a-1)+a);
    if(powab > n*(a-1)+a) return n + 1;
    return (powab - 1)/(a-1);
}

void solve(){
    ll n;
    cin >> n;
    bool isP = false;
    for(ll i = 2; i < 60; i++){ 
        ll l = 2, r = n;
        while(l <= r){
            ll m = (l + r)/2;
            ll s = f(m, i, n);
            if(s > n) r = m - 1;
            else if(s < n) l = m + 1;
            else{
                isP = true;
                break;
            }
        }
        if(isP) break;
    }
    cout << (isP ? "YES": "NO") << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) solve();
}
ll f(ll a, ll b, ll n){
    ll powab = binpow(a, b, n*(a-1)+a);
    if(powab > n*(a-1)+a) return n + 1;
    return (powab - 1)/(a-1);
}

void solve(){
    ll n;
    cin >> n;
    bool isP = false;
    for(ll i = 2; i < 60; i++){ 
        ll l = 2, r = n;
        while(l <= r){
            ll m = (l + r)/2;
            ll s = f(m, i, n);
            if(s > n) r = m - 1;
            else if(s < n) l = m + 1;
            else{
                isP = true;
                break;
            }
        }
        if(isP) break;
    }
    cout << (isP ? "YES": "NO") << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) solve();
}

