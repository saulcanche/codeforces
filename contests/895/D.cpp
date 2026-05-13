#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, x, y, ans = 0;
  cin >> n >> x >> y;
  ll l = lcm(x, y);
  ll A = n / x - n / lcm(x, y);
  ll B = n / y - n / lcm(x, y);
  ans += (n + n - (A - 1)) * A / 2;
  ans -= (1 + B) * B / 2;
  cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
