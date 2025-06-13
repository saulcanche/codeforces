#include <bits/stdc++.h>
using namespace std;
typedef int ll;
ll n, x, ans = -1;
vector<ll> path;
vector<bool> used;
vector<vector<ll>> adj;
ll pathSize = 0;
void dfs(ll node){
    used[node] = true;
    path.push_back(node);
    ans+= 2;
    if(node == x){
        pathSize = path.size();
        return;
    }
    for(auto &nb : adj[node]){
        if(nb == x){
            dfs(nb);
            return;
        }
    }
    for(auto nb : adj[node]) if(!used[nb]) dfs(nb);
    path.pop_back();
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    x--;
    used.resize(n);
    adj.resize(n);
    for(ll i = 0; i < n-1; i++){
        ll a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0);
    cout << ans - pathSize<< endl;
}