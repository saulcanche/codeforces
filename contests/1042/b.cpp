#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  string s;
  cin >> n;
  vector<ll> a(n + 1);
  for (ll i = 1; i <= n; i++) {
    if (i % 2)
      a[i] = -1;
    else {
      if (i == n)
        a[i] = 2;
      else
        a[i] = 3;
    }
  }
  for (ll i = 1; i <= n; i++)
    cout << a[i] << " ";
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
