#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(k);
  for (ll i = 0; i < k; ++i)
    cin >> a[i];
  sort(a.begin(), a.end());

  ll target = a.back();
  ll need = n - target;
  if (need == 0) {
    cout << 0 << '\n';
    return;
  }

  ll cnt1 = 0;
  for (ll i = 0; i < k - 1; ++i)
    if (a[i] == 1)
      ++cnt1;

  ll ans = 0;
  ll use = min(need, cnt1);
  ans += use;
  need -= use;
  for (ll i = 0; i < k - 1 && need > 0; ++i) {
    ll x = a[i];
    if (x == 1)
      continue;
    ll take = min(need, x);
    if (take == x) {
      ans += (2 * x - 1);
      need -= x;
    } else {
      ans += (2 * take);
      need -= take;
    }
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
