#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(n + 1);
  for (ll i = 1; i <= n; i++)
    cin >> a[i];
  for (ll i = 1; i <= n; i++) {
    for (ll j = i + 1; j <= n; j++) {
      if (i + j == a[i] * a[j])
        ans++;
    }
  }
  cout << ans << "\n";
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
