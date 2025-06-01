#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool cheat = false;
    ll c0 = 0;
    for(ll &x : a){
        cin >> x;
        if(x == 0) c0++;
    }
    for(ll i = 1 ; i < n; i++){
        ll q = a[i] + a[i-1];
        if(q == 0) cheat = true;
    }
    if(c0 == 0) cheat = true;
    cout << (cheat? "YES" : "NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}