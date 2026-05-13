#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, j, k;
  cin >> n >> j >> k;
  vector<pair<ll, ll>> a(n);
  ll player;
  for (ll i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
    if (i == j - 1)
      player = a[i].first;
  }
  sort(a.begin(), a.end());
  if (k == 1) {
    if (a.back().first == player)
      cout << "YES";
    else {
      cout << "NO";
    }
    cout << endl;
    return;
  }
  cout << "YES" << endl;
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
