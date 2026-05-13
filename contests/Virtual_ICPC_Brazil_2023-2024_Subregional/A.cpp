#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
  ll ans = 0, cnt = 0;
  char c;
  for (ll i = 0; i < n; i++) {
    cin >> c;
    if (c == 'b') {
      if (cnt > 1)
        ans += cnt;
      cnt = 0;
    } else
      cnt++;
  }
  if (cnt > 1)
    ans += cnt;
  cout << ans;
}
