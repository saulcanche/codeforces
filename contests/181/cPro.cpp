#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1000000007, a, b, n;

bool isValid(ll sum){
    if(sum == 0) return (a == 0 || b == 0);
    char ca = '0' + a, cb = '0' + b;
    for(char c: to_string(sum)){
        if(c != ca && c != cb) return false;
    }
    return true;
}

ll binpow(ll a, ll b){
    a %= md;
    ll res = 1;
    while(b){
        if(b&1) res = res * a % md; 
        a = a * a % md;
        b >>= 1;
    }
    return res;
}

ll inv(ll a){
    return binpow(a, md-2);
}

vector<ll> fac;

int main(){
    cin >> a >> b >> n;
    fac.resize(n+1);
    fac[0] = 1;
    for(ll i = 1; i <= n; i++) fac[i] = fac[i-1] * i % md;
    ll ans = 0;
    for(ll ac = 0; ac <= n; ac++){  
        ll bc = n - ac;
        ll sum = (ac * a) + (bc * b);
        if(isValid(sum)) {
            ll perm = fac[n] * inv(fac[ac]) % md * inv(fac[bc]) % md;
            ans = (ans + perm) % md;
        }
    }
    cout << ans << endl;
    return 0;
}