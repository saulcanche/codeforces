#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>  
using namespace std;
typedef long long ll;

void solve(){
    ll n, s, i;
    cin >> n; 
    cin >> s;
    
    vector<vector<ll>> vid(n, vector<ll>(2, 0));
    
    for(i = 0; i < n; i++){
        cin >> vid[i][0];
        vid[i][0] += i;
    }
    
    for(i = 0; i < n; i++){
        ll x;
        cin >> vid[i][1];
    }
    
    ll best = -1; 
    ll best_index = -1;
    
    for(ll i = 0; i < n; i++){
        if(vid[i][0] <= s){  
            if(vid[i][1] > best) {  
                best = vid[i][1];
                best_index = i+1;
            }
        } 
    }
    cout << best_index << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t; 
    cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}
