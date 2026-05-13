#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_equal(const vector<ll> &a, const vector<ll> &b) {
  return a == b || vector<ll>(a.rbegin(), a.rend()) == b;
}
vector<ll> fold(const vector<ll> &arr, int pos) {
  int left_len = pos;
  int right_len = arr.size() - pos;
  int len = max(left_len, right_len);
  vector<ll> result(len);
  for (int i = 0; i < len; ++i) {
    if (i < left_len)
      result[i] += arr[pos - 1 - i];
    if (i < right_len)
      result[i] += arr[pos + i];
  }
  return result;
}

bool dfs(vector<ll> current, const vector<ll> &target) {
  if (current.size() < target.size())
    return false;
  if (is_equal(current, target))
    return true;

  for (int i = 1; i < current.size(); ++i) {
    vector<ll> next = fold(current, i);
    if (dfs(next, target))
      return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, m;
  cin >> n;
  vector<ll> a(n);
  ll suma = 0, sumb = 0;
  for (ll &x : a) {
    cin >> x;
    suma += x;
  }
  cin >> m;
  vector<ll> b(m);
  for (ll &x : b) {
    cin >> x;
    sumb += x;
  }
  if (suma != sumb) {
    cout << "N\n";
    return 0;
  }
  if (m == 1) {
    cout << "S\n";
    return 0;
  }
  cout << (dfs(a, b) ? "S\n" : "N\n");
}
