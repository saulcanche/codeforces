#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> cnt(4);
  ll c = 3;
  for (ll i = 0; i < 4; i++) {
    cnt[i] = (n + c) / 4;
    c--;
  }
  cout << (cnt[0] != cnt[3] || cnt[1] != cnt[2] ? "Alice" : "Bob") << endl;
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
