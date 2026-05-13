#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> powers(21, 1);
void solve() {
  ll n;
  cin >> n;
  ll ans = 0, x = 0;
  while (n > 0) {
    ll d = n % 3;
    if (d) {
      ll cost = powers[x + 1] + (x == 0 ? 0 : (1LL * x * powers[x - 1]));
      ans += d * cost;
    }
    n /= 3;
    x++;
  }
  cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (ll i = 1; i < 20; i++)
    powers[i] = powers[i - 1] * 3;
  ll t;
  cin >> t;
  while (t--)
    solve();
}
