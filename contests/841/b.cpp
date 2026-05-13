#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9 + 7;
using namespace std;
void solve() {
  ll n;
  cin >> n;
  ll ans = ((((n * (n + 1)) % MOD) * (4 * n - 1)) % MOD * 337) % MOD;
  cout << ans << endl;
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
