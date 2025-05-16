#include <iostream>
#include <vector>
#include <set>
#include <limits.h>
using namespace std;
typedef long long ll;

void solve(){
   ll n, k; 
   cin >> n >> k;
   vector<ll> last(k+1, -1);
   vector<multiset<ll>> gaps(k+1);
   ll x;

   for(ll i = 0; i < n; i++){
        cin >> x;
        if(last[x] == -1) {
            gaps[x].insert(i);
        } else {
            gaps[x].insert(i - last[x] - 1);  
        }
        last[x] = i;
   }

   for(ll i = 1; i <= k; i++){
        if(last[i] != -1) { 
            gaps[i].insert(n - last[i] - 1);
        }
   }

   ll ans = INT_MAX;
   for(ll i = 1; i<= k; i++){
        if(!gaps[i].empty()){
            ll aux = *gaps[i].rbegin(); 
            auto it = gaps[i].find(aux);
            if(it != gaps[i].end()) gaps[i].erase(it);
            gaps[i].insert(aux / 2);
            ans = min(ans, *gaps[i].rbegin());
        }
   }
   cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}