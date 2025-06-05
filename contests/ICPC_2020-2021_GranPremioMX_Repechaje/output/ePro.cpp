#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> mg, pr, ru, que;
vector<vector<ll>> adj;
ll dfs(ll n){
    ru[n] = pr[n] + que[n];
    for(auto v: adj[n]){
        ru[n] += (ru[v] != -1? ru[v] : dfs(v));
    }
    return ru[n];
}
ll propagation(ll n) {
    for (auto v : adj[n]) {
        que[n] += propagation(v);
    }
    return que[n];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll N, M, Q, root, m, e, v, t;
    cin >> N >> M >> Q;
    mg.resize(N+1);
    pr.resize(N+1, 0);
    ru.resize(N+1, -1);
    adj.resize(N+1);
    que.resize(N+1, 0);
    for(ll i = 1; i <= N; i++){
        cin >> mg[i];
        if(mg[i] == 0) root = i;
        else adj[mg[i]].push_back(i);
    }
    for(ll i = 0; i < M; i++){
        cin >> m >> e >> v;
        if(m == 1) pr[e] += v;
        else que[e] += v;
    }
    propagation(root);
    dfs(root);
    for(ll i = 0; i < Q; i++){
        cin >> t >> e;
        cout << (t == 1 ? pr[e]+que[e]: ru[e]) << endl;
    }
}