#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> s(n), t(n);
  for (auto &x : s)
    cin >> x;
  for (auto &x : t)
    cin >> x;
  map<ll, vector<ll>> sg, tg;
  for (ll i = 0; i < n; i++) {
    ll r = s[i] % k;
    if (r < 0)
      r += k;
    sg[r].push_back(s[i] / k);
  }
  for (ll i = 0; i < n; i++) {
    ll r = t[i] % k;
    if (r < 0)
      r += k;
    tg[r].push_back(t[i] / k);
  }

  if (sg.size() != tg.size()) {
    cout << "NO" << endl;
    return;
  }
  for (auto &[r, vec] : sg) {
    if (tg.count(r) == 0 || vec.size() != tg[r].size()) {
      cout << "NO" << endl;
      return;
    }
    sort(vec.begin(), vec.end());
    sort(tg[r].begin(), tg[r].end());
    if (vec != tg[r]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
