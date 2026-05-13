#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> s(n), t(n);
  map<ll, ll> freqS, freqT;
  for (ll i = 0; i < n; i++) {
    cin >> s[i];
    ll r = s[i] % k;
    ll altR = (k - r) % k;
    freqS[min(r, altR)]++;
  }
  for (ll i = 0; i < n; i++) {
    cin >> t[i];
    ll r = t[i] % k;
    ll altR = (k - r) % k;
    freqT[min(r, altR)]++;
  }
  bool isP = true;
  for (auto [r, freq] : freqS) {
    if (freqT[r] != freq) {
      isP = false;
      break;
    }
  }

  for (auto [r, freq] : freqT) {
    if (freqS[r] != freq) {
      isP = false;
      break;
    }
  }
  cout << (isP ? "YES" : "NO") << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
