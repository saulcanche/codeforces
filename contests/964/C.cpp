#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll n, s, m;
    cin >> n >> s >> m;
    vector<vector<ll>> a(n, vector<ll>(2));
    for (auto &x : a) cin >> x[0] >> x[1];
    sort(a.begin(), a.end());
    if (a[0][0] >= s) {
        cout << "YES" << endl;
        return;
    }

    for (ll i = 1; i < n; i++) {
        if (a[i][0] - a[i - 1][1] >= s) {
            cout << "YES" << endl;
            return;
        }
    }
    if (m - a[n - 1][1] >= s) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
