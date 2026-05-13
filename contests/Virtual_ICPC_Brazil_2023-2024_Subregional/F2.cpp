#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, c;
  cin >> n >> c;
  vector<string> words(n);
  vector<ll> ind_miss(n);
  char ch;

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < c; j++) {
      cin >> ch;
      words[i] += ch;
      if (ch == '*') ind_miss[i] = j;
    }
  }

  unordered_map<string, ll> freq;
  ll maxF = 0;
  string wordMaxF;

  for (ll i = 0; i < n; i++) {
    ll p = ind_miss[i];
    string w = words[i];
    for (char l = 'a'; l <= 'z'; l++) {
      w[p] = l;
      ll& f = freq[w];
      f++;
      if (f > maxF || (f == maxF && w < wordMaxF))
        maxF = f, wordMaxF = w;
    }
  }

  cout << wordMaxF << " " << maxF;
}
