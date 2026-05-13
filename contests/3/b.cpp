#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, x;
  cin >> n;
  vector<ll> a(n);
  ll even = -1, odd = 0;
  for (ll &x : a)
    cin >> x;
  for (ll k = 2; k < 1e17; k <<= 1) {
    set<ll> unique;
    for (ll i = 0; i < n; i++)
      unique.insert(a[i] % k);
    if (unique.size() == 2) {
      cout << k << endl;
      return;
    }
  }
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
