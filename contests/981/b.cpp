#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<vector<ll>> a(n, vector<ll>(n, 0));
  for (auto &x : a) {
    for (auto &y : x)
      cin >> y;
  }
  ll ans = 0;
  for (ll d = -(n - 1); d <= (n - 1); d++) {
    ll mn = 0;
    for (ll i = 0; i < n; i++) {
      ll j = i - d;
      if (j >= 0 && j < n)
        mn = min(mn, a[i][j]);
    }
    ans += abs(mn);
  }
  cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
}
