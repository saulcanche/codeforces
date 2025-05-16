#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    map<ll, ll> freq;
    ll n;
    cin >> n;
    ll x, c = 2*n;
    while (c--){
        cin >> x;
        freq[x]++;
    }
    ll mx = 1;
    for(auto &p: freq){
        mx = max(mx, p.second);
    }
    cout << mx << endl;

    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}