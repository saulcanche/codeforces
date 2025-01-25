#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin >> n;
    vector<ll> mult;
    int pv = 1;
    while(n > 0){
        ll d = n % 10;
        if(d != 0) mult.push_back(d * pv);
        n /= 10;
        pv *= 10;
    }
    cout << mult.size() << endl;
    for(auto x : mult) cout << x << " ";
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}
