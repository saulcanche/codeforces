#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(n));
    for(auto &row : a) for(auto &x : row) cin >> x;
    ll ans = 0; 
    for(ll i = 0; i <= n-k; i++){           
        for(ll j = 0; j <= n-k; j++){       
            set<ll> seen;                   
            seen.insert(a[i][j]);          
            seen.insert(a[i+k-1][j+k-1]);  
            seen.insert(a[i][j+k-1]);     
            seen.insert(a[i+k-1][j]);      
            if(seen.size() == 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}