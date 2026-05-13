#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> a(m, vector<ll>(n)), pf(m, vector<ll>(n));
  vector<ll> sum(m, 0);
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++)
      cin >> a[j][i];
  }
  for (ll i = 0; i < m; i++)
    sort(a[i].begin(), a[i].end(), greater<ll>());

  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      pf[i][j] = (j > 0 ? pf[i][j - 1] + a[i][j] : a[i][j]);
      // cout << a[i][j] << " ";
    }
    sum[i] = pf[i].back();
    // cout << endl;
  }
  ll ans = 0;
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n - 1; j++) {
      ll next = (j > 0 ? sum[i] - pf[i][j - 1] : sum[i]);
      ll b = a[i][j] * (n - j);
      // cout << "next : " << next << " b: " << b << " a[" << i << "][" << j
      //      << "]: " << a[i][j] << endl;
      ans += (b - next);
      // cout << "ans : " << ans << endl;
      // cout << pf[i][j] << " ";
    }
    // cout << endl;
  }
  cout << ans << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
