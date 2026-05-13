#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  ll n = s.size();
  s += s; // double string to handle circularity

  ll maxOn = 0, cnt = 0;
  for (ll i = 0; i < 2 * n; i++) {
    if (s[i] == '1') {
      cnt++;
      maxOn = max(maxOn, cnt);
    } else {
      cnt = 0;
    }
  }
  maxOn = min(maxOn, n);
  if (maxOn == n) {
    cout << 1LL * n * n << '\n';
  } else {
    ll a = (maxOn + 1) / 2;
    ll b = (maxOn + 2) / 2;
    cout << 1LL * a * b << '\n';
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
