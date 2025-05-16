#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
typedef long long ll;
using namespace std;
void solve(){
    ll n, k, x;
    cin >> n >> k;
    vector<pair<ll, ll>> heap;
    for(ll i = 0; i < n; i++){
        cin >> x; 
        operation = (x + k - 1)
        heap.push_back({x + k - 1});
    }
    sort(heap.begin(), heap.end());
    
    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
}