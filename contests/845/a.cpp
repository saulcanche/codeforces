#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i + 1 < n; i++) {
    ans += (!((a[i] ^ a[i + 1]) & 1));
  }
  cout << ans << endl;
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
