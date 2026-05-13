#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a, st;
void build(ll u, ll tl, ll tr, ll op) {
  if (tl == tr) {
    st[u] = a[tl];
  } else {
    ll tm = (tl + tr) / 2;
    build(u * 2, tl, tm, !op);
    build(u * 2 + 1, tm + 1, tr, !op);
    if (op)
      st[u] = st[u * 2] ^ st[u * 2 + 1];
    else
      st[u] = st[u * 2] | st[u * 2 + 1];
  }
}
void update(ll u, ll tl, ll tr, ll pos, ll val, ll op) {
  if (tl == tr) {
    st[u] = val;
  } else {
    ll tm = (tl + tr) / 2;
    if (pos <= tm)
      update(u * 2, tl, tm, pos, val, !op);
    else
      update(u * 2 + 1, tm + 1, tr, pos, val, !op);
    if (op)
      st[u] = st[u * 2] ^ st[u * 2 + 1];
    else
      st[u] = st[u * 2] | st[u * 2 + 1];
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  ll size = 1 << n;
  a.resize(size);
  st.resize(4 * size);
  for (ll &x : a)
    cin >> x;
  build(1, 0, size - 1, (n + 1) % 2);
  while (m--) {
    ll p, b;
    cin >> p >> b;
    --p;
    update(1, 0, size - 1, p, b, (n + 1) % 2);
    cout << st[1] << '\n';
  }
  return 0;
}
