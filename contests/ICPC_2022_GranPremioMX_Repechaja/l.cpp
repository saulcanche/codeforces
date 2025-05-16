#include <bits/stdc++.h>
using namespace std;
typedef int ll;

ll n, x, ans = -2;
vector<ll> path;
vector<bool> used;
vector<vector<ll>> adj;
ll pathS = 0;
void dfs(ll y){
    used[y] = true;
    path.push_back(y);
    ans+= 2;
    if(y == x){
        pathS = path.size();
        return;
    }
    for(auto &u : adj[y]){
        if(u == x){
            dfs(x);
            return;
        }
    }
    for(auto u : adj[y]){
        if(!used[u]) dfs(u);
    }
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
    cout << ans - pathS + 1<< endl;
}