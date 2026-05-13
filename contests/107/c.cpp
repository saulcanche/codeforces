#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  set<ll> unique;
  ll n, q, x;
  cin >> n >> q;
  vector<pair<ll, ll>> colors;

  for (ll i = 0; i < n; i++) {
    cin >> x;
    if (!unique.count(x)) {
      unique.insert(x);
      colors.push_back({i, x});
    }
  }

  for (ll i = 0; i < q; i++) {
    cin >> x;
    ll last = 0;
    for (auto &[ind, col] : colors) {
      if (col == x) {
        last = ind;
        cout << ind + 1 << " ";
        ind = 0;
        break;
      }
    }
    for (auto &[ind, col] : colors) {
      if (col != x && ind < last) {
        ind++;
      }
    }
  }
}
