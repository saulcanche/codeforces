#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  ll sqn = sqrt(n);

  if (sqn * sqn != n) {
    char c;
    while (n--)
      cin >> c;
    cout << "No" << endl;
    return;
  }

  vector<vector<char>> a(sqn, vector<char>(sqn));
  for (ll i = 0; i < sqn; i++)
    for (ll j = 0; j < sqn; j++)
      cin >> a[i][j];

  int sum = 0;
  for (ll i = 0; i < sqn; i++)
    sum += a[0][i] - '0';
  if (sum != sqn) {
    cout << "No" << endl;
    return;
  }

  sum = 0;
  for (ll i = 0; i < sqn; i++)
    sum += a[sqn - 1][i] - '0';
  if (sum != sqn) {
    cout << "No" << endl;
    return;
  }

  sum = 0;
  for (ll i = 0; i < sqn; i++)
    sum += a[i][0] - '0';
  if (sum != sqn) {
    cout << "No" << endl;
    return;
  }

  sum = 0;
  for (ll i = 0; i < sqn; i++)
    sum += a[i][sqn - 1] - '0';
  if (sum != sqn) {
    cout << "No" << endl;
    return;
  }

  sum = 0;
  for (ll i = 1; i < sqn - 1; i++) {
    for (ll j = 1; j < sqn - 1; j++)
      sum += a[i][j] - '0';
  }
  if (sum != 0) {
    cout << "No" << endl;
    return;
  }

  cout << "Yes" << endl;
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
