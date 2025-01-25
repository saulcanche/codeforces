#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    cout << (find(a.begin(), a.end(), k) == a.end() ? "NO" : "YES") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
