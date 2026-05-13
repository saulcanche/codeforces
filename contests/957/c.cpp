#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, m, k;
  cin >> n >> m >> k;
  for (ll i = n; i >= k; i--)
    cout << i << " ";
  for (ll i = m + 1; i <= k - 1; i++)
    cout << i << " ";
  for (ll i = 1; i <= m; i++)
    cout << i << " ";
  cout << endl;
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
