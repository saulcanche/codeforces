#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> adj;
vector<bool> used;
ll ans = -1;
void dfs(ll node, ll d){
    used[node] = true;
    ans = max(ans, d);
    for(ll &u : adj[node]) if(!used[u]) dfs(u, d+1);
}
int main(){
    ll n, p;
    cin >> n;
    adj.resize(n+1);
    used.resize(n+1, false);
    vector<ll> roots;
    for(ll i = 1; i < n+1; i++){
        cin >> p;
        if(p == -1) roots.push_back(i);
        else adj[p].push_back(i);
    }
    for(ll &x : roots) dfs(x, 1);
    cout << ans;
}