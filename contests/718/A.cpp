#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n; 
    cin >> n;
    if ((n % 2050)) {
        cout << -1 << endl;
        return;
    }
    ll q = n / 2050;
    ll ans = 0; 
    while(q){
        ans += q%10;
        q /= 10;
    }
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}