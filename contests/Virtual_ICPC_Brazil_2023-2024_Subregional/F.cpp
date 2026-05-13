#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, c;
  cin >> n >> c;
  vector<ll> ind_miss(n);
  vector<string> words(n);
  char ch;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < c; j++) {
      cin >> ch;
      words[i] += ch;
      if (words[i][j] == '*')
        ind_miss[i] = j;
    }
  }
  ll maxF = 0;
  string wordMaxF;
  for (ll i = 'a'; i <= 'z'; i++) {
    char l = (char)i;
    map<string, ll> freq;
    for (ll j = 0; j < n; j++) {
      words[j][ind_miss[j]] = l;
      freq[words[j]]++;
      words[j][ind_miss[j]] = '*';
    }
    for (auto [str, cnt] : freq) {
      if (cnt > maxF)
        maxF = cnt, wordMaxF = str;
    }
  }
  cout << wordMaxF << " " << maxF;
}
