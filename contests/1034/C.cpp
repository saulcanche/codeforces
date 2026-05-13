#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), smax(n), pmin(n), ans(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    pmin[i] = (i > 0 ? min(a[i], pmin[i - 1]) : a[i]);
  }
  for (ll i = n - 1; i >= 0; i--) {
    smax[i] = (i < n - 1 ? max(a[i], smax[i + 1]) : a[i]);
  }
  for (ll i = 0; i < n; i++) {
    ll left = pmin[i];
    ll right = smax[i];
    if (min(left, right) == a[i] || max(left, right) == a[i])
      ans[i] = 1;
  }
  for (ll x : ans)
    cout << x;
  cout << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
