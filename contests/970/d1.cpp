#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> p, s;
void make_set(ll v) {
  p[v] = v;
  s[v] = 1;
}
ll find_set(ll v) {
  if (v == p[v])
    return v;
  return p[v] = find_set(p[v]);
}
bool join(ll a, ll b) {
  a = find_set(a);
  b = find_set(b);
  if (a == b)
    return false;
  if (s[a] < s[b])
    swap(a, b);
  p[b] = a;
  s[a] += s[b];
  return true;
}
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  p.resize(n);
  s.resize(n);
  for (ll i = 0; i < n; i++)
    make_set(i);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    join(i, a[i]);
  }
  string str;
  cin >> str;
  vector<ll> black(n, 0);
  for (ll i = 0; i < n; i++) {
    ll root = find_set(i);
    if (str[i] == '0')
      black[root]++;
  }
  for (ll i = 0; i < n; i++) {
    ll root = find_set(i);
    cout << black[root] << " ";
  }
  cout << endl;
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
