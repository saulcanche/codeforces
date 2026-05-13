#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  if (n == 1 | n == 2) {
    if (n == 2 && a[0] == a[1])
      cout << 1 << endl;
    else
      cout << n << endl;
    return;
  }
  n = unique(a.begin(), a.end()) - a.begin();
  ll ans = n;
  for (ll i = 0; i + 2 < n; i++) {
    ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
    ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
  }
  cout << ans << endl;
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
