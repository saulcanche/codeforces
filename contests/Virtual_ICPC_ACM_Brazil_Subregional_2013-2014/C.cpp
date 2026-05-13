#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, M, L;
vector<ll> age, min_age, manager;
vector<vector<ll>> adj;
void dfs(ll node){
    for(ll i = 0; i < n; i++)
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> M >> L;
    age.resize(N);
    adj.resize(N);
    min_age.resize(N);
    manager.resize(N, -1);
    for(ll &x: age) cin >> x;
    ll x, y;
    for(ll i = 0; i < M; i++){
        cin >> x >> y; x--, y--;
        adj[x].push_back(y);
        //x manages y;
        manager[y] = x;
    }
    for(ll i = 0; i < N; i++){
        if(manager[i] != -1 && min_age[i] == -1) dfs(i);
    }
    char op;
    ll A, B, E;
    for(ll i = 0; i < L; i++){
        cin >> op;
        if(op == 'T'){
            cin >> A >> B;
        } else if(op == 'P'){
            cin >> E; E--;
            cout << (manager[E] == -1? '*': min_age[E]) << endl;
        }
    }
}
