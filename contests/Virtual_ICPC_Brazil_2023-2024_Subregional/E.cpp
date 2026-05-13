#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, h, ans = 0;
  cin >> n;
  map<ll, ll> arr;
  for (ll i = 0; i < n; i++) {
    cin >> h;
    if (arr[h] > 0)
      arr[h]--, arr[h - 1]++;
    else
      ans++, arr[h - 1]++;
  }
  cout << ans;
}
