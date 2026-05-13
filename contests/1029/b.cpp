#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> ans(n);
  ll r = n - 1, l = 0;
  for (ll i = 0; i < n; i++) {
    if (i % 2) {
      ans[l] = i + 1;
      l++;
    } else {
      ans[r] = i + 1;
      r--;
    }
  }
  for (ll x : ans)
    cout << x << " ";
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
