#include <iostream> 
using namespace std;
typedef long long ll;
void solve(){
    ll ans = __LONG_LONG_MAX__, a, b;
    cin >> a >> b;
    for(ll i = 0; i <= 1000; i++){
        ll curr_b = b + i;
        if(curr_b == 1) continue;
        ll temp_a = a;
        ll div = 0;
        while(temp_a > 0){
            temp_a/= curr_b;
            div++;
        }
        ans = min(ans, div + i);
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}