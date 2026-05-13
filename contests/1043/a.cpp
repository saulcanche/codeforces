#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, m;
  string a, b, c;
  cin >> n >> a >> m >> b >> c;

  for (ll i = 0; i < m; i++) {
    if (c[i] == 'V')
      a = b[i] + a;
    else
      a = a + b[i];
  }

  cout << a << endl;
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
