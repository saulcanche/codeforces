#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  ll x;
  set<ll> seen;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    seen.insert(x);
  }
  cout << (seen.size() < n ? "YES" : "NO") << endl;
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
