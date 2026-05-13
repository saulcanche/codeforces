#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const vector<pair<ll, ll>> moves = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    set<pair<ll, ll>> kn;
    for (ll i = 0; i < k; i++) {
        ll x, y;
        cin >> x >> y;
        kn.insert({x, y});
    }
    ll rm = 0;
    vector<pair<ll, ll>> kL(kn.begin(), kn.end());
    for (auto [x, y] : kL) {
        if (kn.find({x, y}) == kn.end()) continue;
        for (auto [dx, dy] : moves) {
            ll nx = x + dx;
            ll ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                auto it = kn.find({nx, ny});
                if (it != kn.end()) {
                    kn.erase(it);
                    rm++;
                }
            }
        }
    }
    cout << rm << endl;
    return 0;
}
