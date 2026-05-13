#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll l, r, step = 1, ans = 0;
  cin >> l >> r;
  while (l <= r) {
    l += step;
    step += 1;
    ans++;
  }
  cout << ans << endl;
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
