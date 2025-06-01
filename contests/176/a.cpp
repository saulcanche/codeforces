#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k; cin >> n >> k;
    ll ops = 0;
    if ((n % 2) != 0 && (k % 2) != 0) n -= k, ops++;
    if (n <= 0) {
        cout << ops << endl;
        return;
    }
    ll m = (n + (k - 2)) / (k - 1);
    ops += m;
    cout << ops << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
