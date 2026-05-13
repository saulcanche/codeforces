#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, ans = 1;
  cin >> n;
  vector<ll> a(n), prefix(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    prefix[i] = (i > 0 ? prefix[i - 1] + a[i] : a[i]);
  }
  for (ll i = 0; i < n - 1; i++) {
    ans = max(ans, __gcd(prefix[i], prefix[n - 1]));
  }
  cout << ans << endl;
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
