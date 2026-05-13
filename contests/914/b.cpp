#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> ans(n);
  vector<pair<ll, ll>> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end(), greater<pair<ll, ll>>());
  vector<ll> prefix(n);
  prefix[n - 1] = a[n - 1].first;
  for (ll i = n - 2; i >= 0; i--) {
    prefix[i] = a[i].first + prefix[i + 1];
  }
  ans[a[0].second] = n - 1;
  for (ll i = 1; i < n; i++) {
    ll maxRemovable = n - i - 1;
    for (ll j = 0; j < i; j++) {
      if (prefix[i] >= a[j].first) {
        maxRemovable = max(maxRemovable, ans[a[j].second]);
        break;
      }
    }
    ans[a[i].second] = maxRemovable;
  }
  for (ll i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
