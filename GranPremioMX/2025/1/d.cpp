#include <iostream>
#include <vector>
#include <limits>
using namespace std;
typedef long long ll;
int main(){
    ll k; cin >> k;
    vector<ll> ingre(k), totals(k, 0);
    for(auto &x: ingre) cin >> x;
    ll n; cin >> n;
    vector<vector<ll>> orders(n, vector<ll>(k));
    for(auto &order : orders){
        for(auto &ing : order) cin >> ing;
    }
    for(ll j = 0; j < k; j++){
        for(ll i = 0; i < n; i++) totals[j] += orders[i][j];
    }
    
    ll minDays = __LONG_LONG_MAX__;
    ll minRemainder = __LONG_LONG_MAX__;
    ll limitingIngredient = -1;
    
    for(ll j = 0; j < k; j++){
        if(totals[j] > 0){
            ll days = ingre[j] / totals[j];
            ll remainder = ingre[j] % totals[j];
            
            if(days < minDays || (days == minDays && remainder < minRemainder)){
                minDays = days;
                minRemainder = remainder;
                limitingIngredient = j;
            }
        }
    }
    
    ll fullDays = minDays;
    ll remaining = ingre[limitingIngredient] - (fullDays * totals[limitingIngredient]);
    
    ll failedOrderIndex = -1;
    for(ll i = 0; i < n; i++){
        if(remaining < orders[i][limitingIngredient]){
            failedOrderIndex = i + 1;
            break;
        }
        remaining -= orders[i][limitingIngredient];
    }
    
    cout << fullDays + 1 << " " << failedOrderIndex << endl;
    
    return 0;
}