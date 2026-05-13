#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> p, s, c, ans;
void make_set(ll v) {
  p[v] = v;
  s[v] = 0;
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
  p.resize(n);
  c.resize(n);
  s.resize(n);
  ans.resize(n);
  vector<ll> a(n);
  ll x;
  for (ll i = 0; i < n; i++)
    make_set(i);
  for (ll i = 0; i < n; i++) {
    cin >> x;
    x--;
    a[i] = x;
    join(x, i);
  }
  char ch;
  for (ll i = 0; i < n; i++) {
    cin >> ch;
    if (ch == '0')
      c[i] = 1;
  }
  map<ll, ll> comp;
  for (ll x : a) {
    ll root = find_set(x);
    comp[root] += c[x];
  }
  for (ll i = 0; i < n; i++) {
    ll root = find_set(a[i]);
    cout << comp[root] << " ";
  }
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
