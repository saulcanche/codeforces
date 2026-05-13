#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, k;
  string s;
  cin >> n >> k >> s;
  ll wd = 0;
  for (ll i = 0; i < k; i++) {
    wd += (s[i] - '0');
  }
  if (wd == k) {
    cout << "NO" << endl;
    return;
  }
  for (ll i = k; i < n; i++) {
    wd -= (s[i - k] - '0');
    wd += (s[i] - '0');
    if (wd == k) {
      cout << "NO" << endl;
      return;
    }
  }
  vector<ll> p(n);
  ll temp = 1;
  for (ll i = 0; i < n; i++) {
    if (s[i] - '0')
      p[i] = temp++;
  }
  temp = n;
  for (ll i = 0; i < n; i++) {
    if (s[i] - '0' != 1)
      p[i] = temp--;
  }
  cout << "YES" << endl;
  for (ll x : p)
    cout << x << " ";
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
