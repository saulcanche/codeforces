#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  auto it = unique(a.begin(), a.end());
  if (it != a.end()) {
    cout << 0 << endl;
    return;
  }
  ll gcd1 = 0, gcd2 = 0;
  for (ll i = 0; i < n; i++) {
    if (i % 2)
      gcd1 = __gcd(gcd1, a[i]);
    else
      gcd2 = __gcd(gcd2, a[i]);
  }
  bool isP = true;
  for (ll i = 1; i < n; i += 2) {
    if (a[i] % gcd2 == 0) {
      isP = false;
      break;
    }
  }
  if (isP) {
    cout << gcd2 << endl;
    return;
  }
  isP = true;
  for (ll i = 0; i < n; i += 2) {
    if (a[i] % gcd1 == 0) {
      isP = false;
      break;
    }
  }
  if (isP) {
    cout << gcd1 << endl;
    return;
  }
  cout << 0 << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
