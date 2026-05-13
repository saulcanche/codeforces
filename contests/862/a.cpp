#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x: a) cin >> x;
    ll xorA = 0;
    for(ll x: a) xorA ^= x;
    if(a.size() % 2 == 0){
        cout << (xorA == 0 ? 0 : -1) << endl;
        return;
    }
    cout << xorA << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}