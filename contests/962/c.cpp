#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, q, l, r;
  string a, b;
  cin >> n >> q >> a >> b;
  vector<vector<ll>> freqA(n + 1, vector<ll>(26, 0));
  vector<vector<ll>> freqB(n + 1, vector<ll>(26, 0));
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < 26; j++) {
      freqA[i + 1][j] = freqA[i][j];
      freqB[i + 1][j] = freqB[i][j];
    }
    freqA[i + 1][a[i] - 'a']++;
    freqB[i + 1][b[i] - 'a']++;
  }
  for (ll i = 0; i < q; i++) {
    cin >> l >> r;
    l--;
    r--;
    vector<ll> cnta(26), cntb(26);
    for (ll j = 0; j < 26; j++) {
      cnta[j] = freqA[r + 1][j] - freqA[l][j];
      cntb[j] = freqB[r + 1][j] - freqB[l][j];
    }
    ll operations = 0;
    for (ll j = 0; j < 26; j++) {
      if (cnta[j] > cntb[j]) {
        operations += cnta[j] - cntb[j];
      }
    }
    cout << operations << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
