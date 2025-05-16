#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    bool cant = false;
    cin >> n;
    n-=2;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    for(ll i = 2; i < n; i++) if(a[i-2] == 1 && a[i-1] == 0 && a[i] == 1) cant = 1;
    cout << (cant? "NO": "YES") << endl;
 }
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}