#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll a, b;
  cin >> a >> b;
  ll s = a + 2 * b;
  if (s % 2 != 0) {
    cout << "No" << endl;
    return;
  }
  ll half = s / 2;
  ll m2 = min(b, half / 2);
  ll r = half - 2 * m2;
  cout << (r <= a ? "Yes" : "No") << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--)
    solve();
}
