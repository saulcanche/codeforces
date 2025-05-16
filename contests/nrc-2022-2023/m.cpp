#include <iostream>
using namespace std;
typedef long long ll;

ll max_gcd_a(ll n) {
    ll max_div = 1;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ll d1 = i;
            ll d2 = n / i;
            if (d1 != n) max_div = max(max_div, d1);
            if (d2 != n) max_div = max(max_div, d2);
        }
    }
    return max_div;
}

void solve() {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << endl;
    } else {
        ll a = max_gcd_a(n);
        ll b = n - a;
        cout << b << " " << a << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}
