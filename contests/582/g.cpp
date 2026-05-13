#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ac = 0;
vector<ll> p, s, ans;
ll nc2(ll x) { return (x * (x - 1)) / 2; }
void build(ll v) {
    p[v] = v;
    s[v] = 1;
}
ll findP(ll v) {
    if (v == p[v]) return v;
    return p[v] = findP(p[v]);
}
void join(ll a, ll b) {
    a = findP(a);
    b = findP(b);
    if (a == b) return;
    if (s[a] < s[b]) swap(a, b);
    ll ps = s[a];
    p[b] = a;
    s[a] += s[b];
    ac += (nc2(s[a]) - nc2(s[b]) - nc2(ps));
}
int main() {
    ll n, m;
    cin >> n >> m;
    p.resize(n);
    s.resize(n);
    ans.resize(m); 

    for (ll i = 0; i < n; i++) build(i);

    vector<tuple<ll, ll, ll>> ed(n - 1); // (weight, u, v)
    for (auto &[w, u, v] : ed) {
        cin >> u >> v >> w;
        u--; v--;
    }
    sort(ed.begin(), ed.end());
    vector<pair<ll, ll>> q(m); // {wi, i} 
    for (ll i = 0; i < m; i++) {
        cin >> q[i].first;
        q[i].second = i;
    }
    sort(q.begin(), q.end());
    ll j = 0;
    for (ll i = 0; i < m; i++) {
        while (j < n - 1 && get<0>(ed[j]) <= q[i].first) {
            join(get<1>(ed[j]), get<2>(ed[j]));
            j++;
        }
        ans[q[i].second] = ac;
    }
    for (ll x : ans) cout << x << " ";
}
