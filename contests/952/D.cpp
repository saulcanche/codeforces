#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> cor;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '#') cor.push_back({i+, j+});
        }
    }

    if (cor.size() == 1) {
        cout << cor[0][0] + 1 << " " << cor[0][1] + 1 << endl; // Output 1-based indices
        return;
    }

    ll min_row = cor[0][0], max_row = cor[0][0];
    ll min_col = cor[0][1], max_col = cor[0][1];
    for (const auto& cell : cor) {
        min_row = min(min_row, cell[0]);
        max_row = max(max_row, cell[0]);
        min_col = min(min_col, cell[1]);
        max_col = max(max_col, cell[1]);
    }

    ll row_center = (min_row + max_row) / 2;
    ll col_center = (min_col + max_col) / 2;

    cout << row_center + 1 << " " << col_center + 1 << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
