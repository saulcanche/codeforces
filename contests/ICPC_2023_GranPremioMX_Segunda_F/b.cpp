#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> fac;
ll md = 1e9 + 7;
ll binpow(ll a, ll b) {
    a %= md;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % md;
        a = a * a % md;
        b >>= 1;
    }
    return res;
}
ll inv(ll a){
    return binpow(a, md-2);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k; 
    cin >> n >> k;
    fac.resize(n+1, 0);
    fac[0] = 1;
    for(ll i = 1; i <= n; i++){
        fac[i] = fac[i-1] * i % md;
    }
    vector<ll> a(n);
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    ll upper = 1;
    for(auto &[k, val] : freq){ 
        upper = upper * fac[val] % md;
    }
    ll perm = fac[n];
    ll ans = upper * inv(perm) % md;
    cout << ans << endl;
    while(k--){
        ll i, val;
        cin >> i >> val;
        i--;
        if(a[i] == val){
            cout << ans << endl;
            continue;
        }
        ll old = a[i];
        upper = upper * inv(fac[freq[old]]) % md;
        freq[old]--;
        upper = upper * fac[freq[old]] % md;
        upper = upper * inv(fac[freq[val]]) % md;
        freq[val]++;
        upper = upper * fac[freq[val]] % md;
        a[i] = val;
        ans = upper * inv(perm) % md;
        cout << ans << endl;
    }
    return 0;
}