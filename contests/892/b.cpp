#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

typedef long long ll;

void solve(){
    ll n, m;
    cin >> n;
    vector<vector<ll>> a(n);
    ll mn = __LONG_LONG_MAX__;
    for(auto &vec : a){
        cin >> m;
        vec.resize(m);
        for(auto &x: vec) cin >> x;
        sort(vec.begin(), vec.end());
        mn = min(mn, vec[0]); 
    }
    sort(a.begin(), a.end(), [](vector<ll>&a, vector<ll>&b){
        return a[1] > b[1];
    });
    ll ans = mn;
    for(ll i = 0; i < n-1; i++){
        ans+= a[i][1];
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}