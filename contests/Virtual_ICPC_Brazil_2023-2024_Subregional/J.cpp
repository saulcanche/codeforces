#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> cards(13 + 1, 4);
ll cincard() {
  ll x;
  cin >> x;
  cards[x]--;
  if (x <= 9)
    return x;
  else
    return 10;
}
ll valcard(ll x) {
  if (x <= 9)
    return x;
  else
    return 10;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
  ll john = cincard() + cincard(), mary = cincard() + cincard(), comm = 0;
  for (ll i = 0; i < n; i++)
    comm += cincard();
  ll toWin = 23 - comm;
  ll ans = -1;
  for (ll i = 1; i < 13 + 1; i++) {
    if (cards[i] == 0)
      continue;
    ll val = valcard(i);
    if (mary + val > toWin)
      continue;
    if (john + val > toWin || mary + val == toWin) {
      ans = i;
      break;
    }
  }
  cout << ans;
}
