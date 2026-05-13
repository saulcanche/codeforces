#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  sort(a.begin(), a.end(), greater<ll>());
  for (ll x : a)
    cout << x << " ";
  cout << endl;
}
int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
