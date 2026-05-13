#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  sort(a.begin(), a.end());
  ll ans = 0;
  if (n == 2) {
    cout << max(a[0], a[1]) << endl;
    return;
  }
  for (int i = n - 1; i >= 0; i -= 2)
    ans += a[i];
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
