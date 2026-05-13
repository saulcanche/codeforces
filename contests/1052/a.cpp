#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  map<ll, ll> freq;
  ll x;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    freq[x]++;
  }
  ll ans = 0;
  vector<ll> fr;
  for (auto [k, v] : freq) {
    fr.push_back(v);
  }
  for (ll i = 1; i <= n; i++) {
    ll frS = 0;
    for (ll f : fr) {
      if (f >= i)
        frS++;
    }
    ans = max(ans, i * frS);
  }
  cout << ans << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
