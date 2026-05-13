#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  sort(a.begin(), a.end());
  vector<ll> prefix(n + 1, 0);
  for (ll i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + a[i];
  }
  ll ans = 0;
  for (ll x = 0; x <= k; x++) {
    ll sumR = prefix[2 * x] + (prefix[n] - prefix[n - (k - x)]);
    ans = max(ans, prefix[n] - sumR);
  }
  cout << ans << endl;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
