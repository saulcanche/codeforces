#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef long long ll;
void solve(){ 
    ll n, k, x;
    cin >> n >> k;
    vector<pair<ll,ll>> a;
    for(ll i = 0; i < n; i++){
        cin >> x;
        if(x%k > 0) a.push_back({x%k, -i});
        else a.push_back({k, -i});
    }
    std::sort(a.begin(), a.end(), greater());
    for(auto x: a){
        cout << abs(x.second)+1 << " ";
    }
    cout << endl;
}
 
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
