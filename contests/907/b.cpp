#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n), queries(q);
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  for (ll i = 0; i < q; i++)
    cin >> queries[i];
  sort(queries.begin(), queries.end());
  vector<ll> prefix(q);
  for (ll i = 0; i < q; i++) {
    ll val = 1ll << (queries[i] - 1);
    prefix[i] = val + (i > 0 ? prefix[i - 1] : 0);
  }
  for (ll i = 0; i < n; i++) {
    ll tz = __builtin_ctzll(a[i]);
    ll pos =
        upper_bound(queries.begin(), queries.end(), tz) - queries.begin() - 1;
    if (pos >= 0) {
      a[i] += prefix[pos];
    }
  }
  for (ll x : a)
    cout << x << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
