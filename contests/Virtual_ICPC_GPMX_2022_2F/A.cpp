#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;
bool binPow(ll a, ll b){
    a %= md;
    ll res = 1;
    while(b > 0){
        if(b & 1) res = res * a % md;
        a = a * a % md;
        b >>= 1;
    }
    return res;
}
ll inv(ll a){
    return binPow(a, md - 2);
}
vector<ll> fac;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    fac.resize(n);
    fac[0] = 1;
    for(ll i = 1; i <= n; i++) fac[i] = fac[i - 1] * i % md;
    vector<ll> a(n);
    map<ll, ll> freq;
    for(auto &x : a){
        cin >> x;
        freq[x]++;
    }
    ll u = 1;
    for(auto &p : freq) u = u * fac[p.second] % md;
    ll r = fac[n];
    ll ans = u * inv(r) % md;
    ll i, val;
    while(k--){
        cin >> i >> val; i--;
        if(a[i] == val) continue;
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
