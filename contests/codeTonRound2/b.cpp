#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), maxv(n), minv(n);
    for(auto &x: a) cin >> x;
    for(ll i = 0; i < n; i++) maxv[i] = a[i] + x, minv[i] = a[i] - x;

    ll v = max(minv[0], maxv[0]), ans = 0;
    for(ll i = 2; i <= n; i++){
        if(a[i] > v) 
    }
}


int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}