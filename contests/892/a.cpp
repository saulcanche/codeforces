#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b, c;
    ll mx = 0;
    for(auto &x : a) {
        cin >> x;
        mx = max(mx, x);
    };
    for(ll x : a){
        if(x == mx) c.push_back(x);
        else b.push_back(x);
    }
    if(!b.empty() && !c.empty()){
        cout << b.size() << " " << c.size() << endl;
        for(ll x: b) cout << x << " ";
        cout << endl;
        for(ll x: c) cout << x << " ";
        cout << endl;
    } else{
        cout << -1 << endl;
    }

}
int main(){
    ll t = 1;
    cin >> t;
    while(t--) solve();
}