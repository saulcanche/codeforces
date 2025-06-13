#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> adj;
vector<vector<ll>> tadj;
vector<bool> used;
vector<ll> maps;
ll dfs(ll node){
    used[node] = 1;
    for(ll u: tadj[node]) if(!used[u]) maps[node] += dfs(u);
    return maps[node];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; 
    cin >> n;
    adj.resize(n+1);
    used.resize(n+1, false); 
    tadj.resize(n+1);
    maps.resize(n+1, 0);
    for(ll i = 1; i < n; i++){ 
        ll a, b;
        cin >> a >> b; 
        adj[a].push_back(b);  
    }
    queue<ll> bfs;
    bfs.push(0); 
    used[0] = 1;
    while(!bfs.empty()){
        ll curr = bfs.front();
        bfs.pop(); 
        for(ll u : adj[curr]){
            if(!used[u]){
                used[u] = 1;
                tadj[curr].push_back(u);
                bfs.push(u);
            }
        }
    }
    ll m;
    cin >> m;
    for(ll i = 0; i < m; i++){  
        ll a;
        cin >> a;
        maps[a]++;
    }
    fill(used.begin(), used.end(), false); 
    ll xd = dfs(0); 
    ll ans = 0;
    for(ll i = 1; i < n; i++) ans += maps[i]; 
    ans -= tadj[0].size();
    cout << ans << endl;  
    return 0;
}
