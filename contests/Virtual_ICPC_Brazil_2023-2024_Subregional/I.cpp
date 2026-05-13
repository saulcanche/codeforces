#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  bool pos = true;
  ll x;
  for (ll i = 0; i < 8; i++) {
    cin >> x;
    if (x == 9)
      pos = false;
  }
  cout << (pos ? 'S' : 'F') << endl;
}
