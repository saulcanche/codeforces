#include <bits/stdc++.h>
using namespace std;
typedef int ll;

vector<vector<ll>> adj;
vector<ll> used;
vector<ll> deep;
priority_queue<ll, vector<ll>, greater<ll>> pq;
ll n, k;
void expand(ll n, ll p, ll d){
    if(d > k) return;
    if(!used[n]) pq.push(n);
    used[n] = 1;
    deep[n] = d;
    for(auto u: adj[n]){
        if(u!= p && deep[u] > d+1) expand(u, n, d+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    adj.resize(n+1);
    used.resize(n+1, 0);
    deep.resize(n+1, INT_MAX);

    for (ll i = 0; i < n - 1; ++i) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> ans;
    pq.push(1);
    while(!pq.empty()){
        ll curr = pq.top();
        pq.pop();
        ans.push_back(curr);
        expand(curr, 0, 0);
    }
    for(ll i = 1; i < n+1; i++) cout << ans[i] << " ";
    cout << endl;
}