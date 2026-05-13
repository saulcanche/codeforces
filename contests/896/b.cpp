#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll manhattan(pair<ll, ll> &u, pair<ll, ll> &v) {
  return abs(u.first - v.first) + abs(u.second - v.second);
}

void solve() {
  ll n, k, a, b;
  cin >> n >> k >> a >> b;
  a--, b--;
  vector<pair<ll, ll>> cities(n);
  for (ll i = 0; i < n; i++)
    cin >> cities[i].first >> cities[i].second;
  ll dd = manhattan(cities[a], cities[b]);
  if (k == 0) {
    cout << dd << endl;
    return;
  }
  ll minA = LONG_LONG_MAX, minB = LONG_LONG_MAX;
  for (ll i = 0; i < k; i++) {
    minA = min(minA, manhattan(cities[a], cities[i]));
    minB = min(minB, manhattan(cities[b], cities[i]));
  }
  ll ndd = minA + minB;
  cout << min(dd, ndd) << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
