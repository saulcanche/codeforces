#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  ll diff = a[1] - a[0];
  bool isP = true;
  for (ll i = 2; i < n; i++)
    if (diff != a[i] - a[i - 1])
      isP = false;
  if (!isP) {
    cout << "NO" << endl;
    return;
  }
  for (ll i = 0; i < n; i++) {
    a[i] = a[i] + (diff < 0 ? diff * (n - i) : -diff * (i + 1));
  }
  cout << (a[0] >= 0 && a[0] % (n + 1) == 0 ? "YES" : "NO") << endl;
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
