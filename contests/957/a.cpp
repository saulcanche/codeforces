#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
void tryAll(ll a, ll b, ll c, ll r) {
  if (r == 0) {
    ans = max(ans, a * b * c);
    return;
  }
  tryAll(a + 1, b, c, r - 1);
  tryAll(a, b + 1, c, r - 1);
  tryAll(a, b, c + 1, r - 1);
}
void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  ans = 0;
  tryAll(a, b, c, 5);
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
