#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, c, t1, t2;
  cin >> n >> c >> t1 >> t2;
  vector<ll> a(n), dp(n + 1, LONG_LONG_MAX);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  dp[n] = 0;
  for (ll i = n - 1; i >= 0; i--) {
    ll j1 = upper_bound(a.begin(), a.end(), a[i] + t1) - a.begin();
    dp[i] = min(dp[i], t1 + dp[j1]);
    ll j2 = upper_bound(a.begin(), a.end(), a[i] + t2) - a.begin();
    dp[i] = min(dp[i], t2 + dp[j2]);
  }
  cout << dp[0];
}
