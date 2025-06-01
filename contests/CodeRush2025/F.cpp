#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;

ll binpow(ll a, ll b){
    ll res = 1;
    a %= md;
    while(b){
        if(b & 1) res = (res * a) % md;
        a = (a * a) % md;
        b >>= 1;
    }
    return res;
}

ll inv(ll a){
    return binpow(a, md - 2);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, i, x, sum = 0;
    cin >> n >> i;
    i--;
    vector<ll> a(n);
    for(ll j = 0; j < n; j++){
        cin >> x;
        a[j] = binpow(2, x);
        sum = (sum%md + a[j]%md) % md;
    }
    cout << (a[i] * inv(sum)) % md;
}
