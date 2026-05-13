#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkHalf(ll x, ll y) {
  if (x > y)
    swap(x, y);
  return y <= 2 * (x + 1);
}

void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if (checkHalf(a, b) && checkHalf(c - a, d - b))
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
