#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, x;
  cin >> n;
  vector<ll> ans(n + 1);
  ans[n] = ans[0] = 1;
  map<ll, ll> freq;
  set<ll> missing;
  for (ll i = 0; i <= n; i++)
    missing.insert(i);
  for (ll i = 0; i < n; i++) {
    cin >> x;
    freq[x]++;
    missing.erase(x);
  }
  ll mex = *missing.begin();
  auto it = freq.upper_bound(mex);
  map<ll, ll> metaFreq;
  for (auto i = freq.begin(); i != it; ++i) {
    metaFreq[i->second]++;
  }
  for (ll i = 1; i < n; i++) {
    if (metaFreq.count(i))
      ans[i] = metaFreq[i];
    if (metaFreq.count(i + 1))
      ans[i]++;
  }
  for (ll x : ans)
    cout << x << " ";
  cout << endl;
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
