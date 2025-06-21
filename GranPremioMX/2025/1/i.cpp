#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, q;
vector<vector<ll>> adj;
vector<bool> used;
vector<ll> topic;
ll ans = 0; 
void dfs(ll node, ll k){
    used[node] = true;
    ll count = 0; 
    if(topic[node] == k) ans++;
    for(auto child : adj[node]) if(!used[child]) dfs(child, k);
}
int main(){
    cin >> n, q;
    adj.resize(n + 1);
    used.resize(n + 1, false);
    for(ll i = 1 ; i < n+1; i++) cin >> topic[i];
    ll x, y, k;
    for(ll i = 0; i < n-1; i++){
        cin >> x >> y; 
        adj[x].push_back(y);
    }
    for(ll i = 0; i < q; i++){
        cin >> x >> k; 
        x--;
        ans = 0;
        fill(used.begin(), used.end(), false);
        dfs(x, k);
        cout << ans << endl;
    }
}