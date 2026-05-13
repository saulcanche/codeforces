#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  string s;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll &x : a)
    cin >> x;
  for (ll &x : b)
    cin >> x;
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    if (a[i] > b[i])
      sum += (a[i] - b[i]);
  }
  cout << sum + 1 << endl;
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
