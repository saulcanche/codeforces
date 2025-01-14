#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
void solve(){
    ll n, max_a = -1, max_b = -1; 
    vector<ll> a(n), b(n);
    
    for(auto &x : a){
        cin >> x;
        max_a = max(max_a, x);
    }
    for(auto &x : b){
        cin >> x;
        max_b = max(max_b, x);
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == max_a && b[i] == max_b);
    }
    
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}