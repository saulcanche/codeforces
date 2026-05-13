#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  ll i = 1;
  for (ll x = 0; i < n + 1 && abs(x) <= n; i++) {
    ll mov = 2 * i - 1;
    x += (i % 2 ? -mov : +mov);
  }
  cout << (i % 2 ? "Sakurako" : "Kosuke") << endl;
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
