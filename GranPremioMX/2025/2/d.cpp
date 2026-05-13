#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> p;
vector<ll> s;
vector<vector<ll>> adj;
vector<ll> e;
vector<bool> used;
vector<ll> ans;
void build(ll v) {
    p[v] = v;
    s[v] = 1;
}
ll find(ll v) {
    if (v == p[v]) return v;
    return p[v] = find(p[v]);
}
bool join(ll a, ll b) {
    a = find(a);
    b = find(b);
    if (a == b) return false;
    if (s[a] < s[b]) swap(a, b);
    p[b] = a;
    s[a] += s[b];
    return true;
}
void dfs(ll node, ll maxe) {
    used[node] = true;
    for (ll nb : adj[node]) {
        if(e[nb] <= maxe){
            if(!used[nb]) dfs(nb, maxe);
            join(node, nb);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    p.resize(n + 1);
    s.resize(n + 1);
    adj.resize(n + 1);
    used.resize(n + 1);
    ans.resize(n+1);
    e.resize(n+1);
    map<ll, vector<ll>> en;
    for (ll i = 1; i <= n; i++) {
        cin >> e[i];
        en[e[i]].push_back(i);
        build(i);
    }
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(auto [ene, v]: en){
        for(ll i: v) if(!used[i]) dfs(i, ene);
        for(ll i: v) ans[i] = s[find(i)];
    }
    for(ll i = 1; i <= n; i++) cout << ans[i] << endl;
    return 0;
}