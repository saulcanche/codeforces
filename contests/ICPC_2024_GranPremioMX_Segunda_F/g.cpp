#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<vector<ll>> adj;
vector<ll> ch;
vector<ll> trafic;
ll chi(ll node, ll parent = -1){
    if(ch[node] != -1) return ch[node];
    ll ans = 1;
    for(auto u : adj[node]){
        if(u == parent) continue;
        ans += chi(u, node);
    }
    return ch[node] = ans;
}
int main(){
    ios_base:: sync_with_stdio(0); cin.tie(0);
    cin >> n;
    adj.resize(n);
    ch.resize(n, -1);
    trafic.resize(n, 0);
    for(ll i = 0; i < n-1; i++){
        ll x, y;
        cin >> x >> y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll xd = chi(0);
    ll ans = -1;
    for(ll i = 0 ; i < n; i++){
        trafic[i] = ch[i] * (n-ch[i]);
        ans = max(ans, trafic[i]);
    }
    ll ansb = 0;
    for(ll i= 0; i < n; i++){
        if(trafic[i] == ans) ansb++;
    }
    cout << ans << " " << ansb << endl;
}
