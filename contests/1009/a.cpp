#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

void solve(){
    ll x =0 ;
    set<ll> a;
    for(ll i = 0; i < 4; i++){
        cin >> x; 
        a.insert(x);
    }
    cout << (a.size() == 1 ? "YES": "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}