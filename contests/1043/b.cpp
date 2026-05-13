#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> ans;
  ll power = 10;
  for (ll k = 1;; ++k) {
    ll d = power + 1;
    if (d > n)
      break;
    if (n % d == 0)
      ans.push_back(n / d);
    if (power > LLONG_MAX / 10)
      break;
    power *= 10;
  }
  if (ans.empty()) {
    cout << 0 << endl;
  } else {
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (ll x : ans)
      cout << x << " ";
    cout << endl;
  }
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
