#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> adj;
vector<ll> s, g, ans;
unordered_map<ll, ll> gp;
void dfs(ll node){
    gp[g[node]]++;
    ans[node] = gp.size();
    for(ll v: adj[node]) {
        dfs(v);
        gp[g[v]]--;
        if(gp[g[v]] == 0) gp.erase(g[v]);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll N, root = -1;
    cin >> N;
    adj.resize(N+1);
    s.resize(N+1, -1);
    g.resize(N+1);
    ans.resize(N+1, 0);
    for(ll i = 1; i < N+1; i++){
        cin >> s[i];
        if(s[i] == 0) root = i;
        adj[s[i]].push_back(i);
    }
    for(ll i = 1; i < N+1; i++){
        cin >> g[i];
    }
    dfs(root);
    for(ll i = 1; i < N+1; i++) cout << ans[i] << " ";
}
