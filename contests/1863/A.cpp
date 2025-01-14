#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll n, a, q, maxO, cConect = 0;
    cin >> n >> a >> q;
    ll a_copy = a;
    maxO = a;
    for (ll i = 0; i < q; i++) {
        char x;
        cin >> x;
        if (x == '+') cConect++, a++;
        else a--;
        maxO = max(maxO, a);
    }
    if (maxO == n) cout << "YES" << endl;
    else if ((a_copy + cConect) >= n) cout << "MAYBE" << endl;
    else cout << "NO" << endl;
}
int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
