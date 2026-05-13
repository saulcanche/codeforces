#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll &x : a)
    cin >> x;
  for (ll &x : b)
    cin >> x;
  ll ans = 0;
  for (ll shift = -(n - 1); shift <= (n - 1); shift++) {
    ll current = 0;
    for (ll i = 0; i < n; i++) {
      ll j = i + shift;
      if (j < 0 || j >= n)
        continue;
      if (a[i] != b[j]) {
        current++;
      }
      if (current > ans) {
        ans = current;
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
