#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; 
    cin >> n;
    ll ans = 0, cz = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x == 0) {
            cz++;
            ans = max(cz, ans);
        } else {
            ans = max(cz, ans);
            cz = 0;
        }
    }
    cout << ans << endl;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; 
    cin >> t;
    while(t--) {
        solve();
    }
}
