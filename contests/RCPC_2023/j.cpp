#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, x;
  map<ll, ll> freq;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    freq[x]++;
  }
  ll cnt = 0;
  bool isP = false;
  for (auto [num, fr] : freq) {
    if (fr > 3)
      isP = true;
    if (fr > 1)
      cnt++;
  }
  if (cnt > 1)
    isP = true;
  cout << (isP ? "SI" : "NO") << endl;
}
int main() {
  ll t = 1;
  while (t--)
    solve();
}
