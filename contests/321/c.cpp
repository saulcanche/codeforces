#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m, ans = 0;
vector<bool> haveCat, used;
vector<vector<ll>> adj;

void dfs(ll node, ll catCount){
    used[node] = true;
    if(haveCat[node]) catCount++;
    else catCount = 0;

    if(catCount > m) return;

    if(adj[node].size() == 1 && node != 1){
        ans++;
        return;
    }

    for(auto &v : adj[node]){
        if(!used[v]) dfs(v, catCount);
    }
}

int main(){
    cin >> n >> m;
    haveCat.resize(n+1);
    used.resize(n+1, false);
    adj.resize(n+1);

    for(ll i = 1; i <= n; i++){
        ll cat;
        cin >> cat;
        haveCat[i] = cat;
    }

    for(ll i = 0; i < n-1; i++){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0);
    cout << ans << endl;
}