#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;
  set<ll> required;
  set<ll> current;
  ll segments = 0;

  for (ll i = 0; i < n; i++) {
    current.insert(a[i]);
    required.erase(a[i]);
    if (required.empty()) {
      segments++;
      required = current;
      current.clear();
    }
  }
  cout << segments << endl;
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
