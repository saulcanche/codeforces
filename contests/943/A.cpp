#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll x;
    cin >> x;
    ll ans = 0, max_aux = 0; 
    for (ll y = 1; y < x; y++) {
        ll aux = __gcd(x, y) + y;
        if (aux > max_aux) {
            max_aux = aux;
            ans = y;
        }
    }
    cout << ans << "\n";
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while (t--)
    {
        solve();

    }
    
}
