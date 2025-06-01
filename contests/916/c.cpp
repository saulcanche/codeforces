#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for(auto &p: a) cin >> p.first;
    for(auto &p: a) cin >> p.second;
    ll maxS = -1, ans = -1, sum = 0;
    for(ll i = 0; i < min(n, k); i++){
        sum += a[i].first;
        maxS = max(maxS, a[i].second); 
        ans = max(ans, sum + (k-i-1)*maxS);
    }
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}