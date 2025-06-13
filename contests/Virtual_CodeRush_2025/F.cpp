#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;
ll powb(ll a, ll b){
    ll r = 1;
    a %=md;
    while(b){
        if(b&1) r = (r*a) % md;
        a = (a*a) % md;
        b >>=1;
    }
    return r;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, i, x, s =0; cin >> n >> i; i--;
    vector<ll> a(n);
    for(ll j = 0; j < n; j++){
        cin >> x;
        a[j] = powb(2, x);
        s = (s%md + a[j]%md) % md;
    }
    cout << (a[i] * powb(s, md-2) % md);
}