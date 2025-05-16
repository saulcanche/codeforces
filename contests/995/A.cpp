#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
void solve(){
    ll n, ans = 0, days3 = 0;
    cin >> n;
    vector<ll> x(3);
    for(auto &e : x){
        cin >> e;
        days3+= e;
    }
    ans = 3*(n/days3);
    n %= (days3);
    if(!n){
        cout << ans << endl;
        return;
    }
    for(ll e: x){
        ans++, n-=e;
        if(n <= 0) break; 
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}