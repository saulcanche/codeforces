#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll ans = 3 * (n / 15);
    n %= 15;
    for (ll i = 0; i <= n; i++) if (i % 3 == i % 5) ans++;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
