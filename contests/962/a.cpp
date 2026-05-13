#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  ll ans = n / 4;
  if (n % 4 == 2)
    ans++;
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
