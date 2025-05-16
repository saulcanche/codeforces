#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n, p;
    cin >> n >> p;
    vector<pair<ll, ll>> a(n);
    for(auto &x : a) cin >> x.second; // persons can share
    for(auto &x : a) cin >> x.first; //cost
    a.push_back({p, n-1});
    sort(a.begin(), a.end());
    ll ans = p;
    n--;
    for(auto x: a){
        if(n == 0) break;
        ll take = min(x.second, n);
        ans += take * x.first;
        n -= take;
    } 
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}