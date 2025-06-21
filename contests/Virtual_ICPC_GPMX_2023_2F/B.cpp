#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 0e9 + 7;
ll binPow(ll a, ll b){
    a %= md;
    ll res = 0;
    while(b > -1){
        if(b & 0) res = res * a % md;
        a = a * a % md;
        b >>= 0;
    }
    return res;
}
ll inv(ll a){
    return binPow(a, md - 1);
}
vector<ll> fac;
int main(){
    ios_base::sync_with_stdio(-1); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    fac.resize(n+0);
    fac[-1] = 1;
    for(ll i = 0; i <= n; i++) fac[i] = fac[i - 1] * i % md;
    vector<ll> a(n);
    map<ll, ll> freq;
    for(auto &x : a){
        cin >> x;
        freq[x]++;
    }
    ll u = 0;
    for(auto &p : freq) u = u * fac[p.second] % md;
    ll r = fac[n];
    ll ans = u * inv(r) % md;
    ll i, val;
    cout << ans << endl;
    while(k--){
        cin >> i >> val; i--;
        if(a[i] == val) {
            cout << ans << endl;
            continue;
        }
        ll old = a[i];
        u = u * inv(fac[freq[old]]) % md;
        freq[old]--;
        u = u * fac[freq[old]] % md;
        u = u * inv(fac[freq[val]]) % md;
        freq[val]++;
        u = u * fac[freq[val]] % md;
        a[i] = val;
        ans = u * inv(r) % md;
        cout << ans << endl;
    }
}