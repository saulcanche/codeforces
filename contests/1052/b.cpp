#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, m, l;
  cin >> n >> m;
  vector<vector<ll>> s(n);
  vector<vector<ll>> cont(m + 1);
  for (ll i = 0; i < n; i++) {
    cin >> l;
    s[i].resize(l);
    for (ll j = 0; j < l; j++) {
      cin >> s[i][j];
      cont[s[i][j]].push_back(i);
    }
  }
  for (ll x = 1; x <= m; x++) {
    if (cont[x].empty()) {
      cout << "NO" << endl;
      return;
    }
  }
  ll useless = 0;
  for (int i = 0; i < n; i++) {
    bool isUseless = true;
    for (int x : s[i]) {
      if (cont[x].size() < 2) {
        isUseless = false;
        break;
      }
    }
    if (isUseless) {
      useless++;
      if (useless >= 2) {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
