#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


void solve(){
    ll n, k, b, c;
    cin >> n >> k;
    map<ll, ll> brands_total;
    for(ll i = 0; i < k; i++){
        cin >> b >> c;
        brands_total[b]+= c;
    }
    
    vector<ll> ans;
    for(auto p : brands_total){
        ans.push_back(p.second);
    }
    sort(ans.begin(), ans.end(), greater());
    ll total = 0;
    for(ll i = 0; i < min(n, (ll)ans.size()); i++) total += ans[i];
    cout << total << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}