#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, k, x;
  cin >> n >> k;
  vector<pair<ll, ll>> seg1;
  ll cnt1 = 0;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    if (x) {
      cnt1++;
    } else {
      if (cnt1 == 0)
        continue;
      seg1.push_back({cnt1, i - cnt1});
      cnt1 = 0;
    }
  }
  if (cnt1 > 0)
    seg1.push_back({cnt1, n - cnt1});
  ll sp = seg1.front().second;
  ll ep = seg1.back().second + seg1.back().first - 1;
  cout << ((ep - sp + 1) <= k ? "YES" : "NO") << endl;
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
