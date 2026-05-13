#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  ll l = 0, r = n - 1, mn = 1, mx = n;
  while (l <= r) {
    if (a[l] == mn)
      l++, mn++;
    else if (a[l] == mx)
      l++, mx--;
    else if (a[r] == mn)
      r--, mn++;
    else if (a[r] == mx)
      r--, mx--;
    else
      break;
  }
  if (l <= r)
    cout << l + 1 << " " << r + 1;
  else
    cout << -1;
  cout << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
