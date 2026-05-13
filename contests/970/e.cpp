#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n;
  string s;
  cin >> n >> s;
  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  if (n == 2) {
    cout << 0 << endl;
    return;
  }
  map<char, ll> even, odd, currEven, currOdd;
  for (ll i = 0; i < n; i++) {
    if (i % 2)
      odd[s[i]]++;
    else
      even[s[i]]++;
  }
  ll best = LLONG_MAX;
  if (n % 2 == 0) {
    ll maxFrOdd = 0, maxFrEven = 0, sumEven = 0, sumOdd = 0;
    for (auto [ch, freq] : even) {
      maxFrEven = max(maxFrEven, freq);
      sumEven += freq;
    }
    for (auto [ch, freq] : odd) {
      maxFrOdd = max(maxFrOdd, freq);
      sumOdd += freq;
    }
    best = min(best, sumEven + sumOdd - maxFrOdd - maxFrEven);
    cout << best << endl;
    return;
  }
  for (ll i = 0; i < n; i++) {
    char ch = s[i];
    swap(even, odd);
    if (i % 2) { // odd
      for (auto p : currOdd) {
        if (even.count(p.first))
          even[p.first] -= p.second;
        odd[p.first] += p.second;
      }
      odd[ch] = max(0ll, odd[ch] - 1);
    } else {
      for (auto p : currEven) {
        if (odd.count(p.first))
          odd[p.first] -= p.second;
        even[p.first] += p.second;
      }
      even[ch] = max(0ll, even[ch] - 1);
    }
    ll maxFrOdd = 0, maxFrEven = 0, sumEven = 0, sumOdd = 0;
    for (auto [ch, freq] : even) {
      maxFrEven = max(maxFrEven, freq);
      sumEven += freq;
    }
    for (auto [ch, freq] : odd) {
      maxFrOdd = max(maxFrOdd, freq);
      sumOdd += freq;
    }
    best = min(best, sumEven + sumOdd - maxFrOdd - maxFrEven);
    if (i % 2)
      currOdd[ch]++;
    else
      currEven[ch]++;
  }
  cout << best + 1 << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
}
