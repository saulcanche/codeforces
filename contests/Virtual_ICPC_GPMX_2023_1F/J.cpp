#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;
ll binpow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % md;
        a = a * a % md;
        b >>= 1;
    }
    return res;
}
ll inv(ll a){
    return binpow(a, md - 2);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q;
    cin >> n >> q; 
    vector<ll> a(n), aa(n), prefixa(n, 0), prefixaa(n, 0);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        aa[i] = a[i] * a[i] % md;
        if(i == 0) {
            prefixa[i] = a[i] % md;
            prefixaa[i] = aa[i] % md; 
        }
        else {
            prefixa[i] = (prefixa[i - 1] + a[i]) % md;  
            prefixaa[i] = (prefixaa[i - 1] + aa[i]) % md;  
        }
    }
    for(ll i = 0; i < q; i++){
        ll l, r;
        cin >> l >> r;
        l--; r--;
        ll sum = (prefixa[r] - (l == 0 ? 0 : prefixa[l - 1]) + md) % md;
        ll sumsq = (prefixaa[r] - (l == 0 ? 0 : prefixaa[l - 1]) + md) % md;
        ll ans = (sum * sum) % md;
        ans = (ans - sumsq + md) % md; 
        ans = (ans * inv(2)) % md;
        cout << ans << "\n";
    }
    return 0;
}