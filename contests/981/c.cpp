#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a;
ll adj_diff(ll i) {
  ll n = a.size();
  ll j = n - i - 1;
  ll aux1 = 0;
  if (i - 1 >= 0 && a[i] == a[i - 1])
    aux1++;
  if (n - i < n && a[j] == a[n - i])
    aux1++;
  ll aux2 = 0;
  if (i - 1 >= 0 && a[j] == a[i - 1])
    aux2++;
  if (n - i < n && a[i] == a[n - i])
    aux2++;
  return aux1 - aux2;
}
void solve() {
  ll n;
  cin >> n;
  a.resize(n);
  for (ll &x : a)
    cin >> x;
  for (ll i = 1; i < n / 2; i++) {
    if (adj_diff(i) > 0)
      swap(a[i], a[n - i - 1]);
  }
  ll ans = 0;
  for (ll i = 1; i < n; i++) {
    if (a[i] == a[i - 1])
      ans++;
  }
  cout << ans << endl;
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
