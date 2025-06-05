#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m; 
vector<vector<ll>> g;
vector<ll> pU, pV, dist;

bool bfs(){
    queue<ll> q;
    for(ll i = 0; i < n; ++i){
        if(pU[i] == -1){
            dist[i] = 0;
            q.push(i);
        } else {
            dist[i] = LLONG_MAX;
        }
    }
    bool found = false;
    while(!q.empty()){
        ll curr = q.front(); q.pop();
        for(ll v : g[curr]){
            if(pV[v] == -1) {
                found = true;
            } else if(dist[pV[v]] == LLONG_MAX){
                dist[pV[v]] = dist[curr] + 1;
                q.push(pV[v]);
            }
        }
    }
    return found;
}
bool dfs(ll node){
    for(ll v : g[node]){
        if(pV[v] == -1 || (dist[pV[v]] == dist[node] + 1 && dfs(pV[v]))){
            pU[node] = v;
            pV[v] = node;
            return true;
        }
    }
    dist[node] = LLONG_MAX;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;

    g.resize(n);
    pU.resize(n, -1);
    pV.assign(m, -1);
    dist.resize(n);

    for(ll i = 0; i < n; i++){
        ll k, c;
        cin >> k;
        while(k--){
            cin >> c; c--; 
            g[i].push_back(c);
        }
    }
    ll match = 0;
    while(bfs()) {
        for(ll i = 0; i < n; ++i) {
            if(pU[i] == -1 && dfs(i)) match++;
        }
    }
    cout << m - match;
}
