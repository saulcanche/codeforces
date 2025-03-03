#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    ll ans = 0;
    for(ll i = 1; i < n; i++) {
        if(a[i-1] > a[i]) ans++, a[i-1] == 0;
    }

}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}