#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
vector<ll> dis;
vector<vector<pair<ll,ll>>> adj;
int main(){
    cin >> n >> m ;
    adj.resize(n+1);
    dis.resize(n+1, -1);
    for(ll i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].emplace_back(b, c);
        adj[b].emplace_back(a, c);
    }
    queue<ll> q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()){
        ll curr = q.front();
        q.pop();
        for(auto [v, c] : adj[curr]){
            if(dis[v] == -1){
                dis[v] = dis[curr] + 1;
                q.push(v);
            }
        }
    }
    vector<ll> min_c(n+1, LONG_LONG_MAX);
    for(ll i = 1; i < n+1; i++){
        for(auto [v, c]: adj[i]){
            if(dis[v] == dis[i] - 1){
                min_c[i] = min(c, min_c[i]);
            }
        }
    }
    ll ans = 0;
    for(ll i = 2; i < n+1; i++){ 
        ans += dis[i] * min_c[i];
    }
    cout << ans << endl;

}