#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, k;
  cin >> n >> k;
  ll s = n / k;
  ll x;
  vector<vector<ll>> r(s, vector<ll>(s, 0));
  for (ll i = 0; i < n; i++) {
    string str;
    cin >> str;
    if (i % k == 0) {
      for (ll j = 0; j < n; j++) {
        if (j % k == 0)
          r[i / k][j / k] = (str[j] == '1' ? 1 : 0);
      }
    }
  }
  for (auto vec : r) {
    for (auto x : vec)
      cout << x;
    cout << endl;
  }
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
