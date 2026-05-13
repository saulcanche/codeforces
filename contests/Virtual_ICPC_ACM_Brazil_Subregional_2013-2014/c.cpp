#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, M, L;
vector<ll> min_age, age;
vector<ll> manager;
vector<vector<ll>> adj;

void dfs(ll node, ll min_actual) {
    min_age[node] = min(min_age[node], min_actual);
    for (ll u : adj[node]) dfs(u, min(min_actual, age[node]));
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> L;
    min_age.resize(N, LLONG_MAX);
    manager.assign(N, false);
    age.resize(N);
    adj.resize(N);
    for (ll &x : age) cin >> x;
    ll x, y;
    for (ll i = 0; i < M; i++) {
        cin >> x >> y; x--, y--;
        manager[y] = true;
        adj[x].push_back(y);
    }
    for (ll i = 0; i < N; i++) if (!manager[i]) dfs(i, LLONG_MAX);
    char op;
    ll A, B, E;
    for (ll i = 0; i < L; i++) {
        cin >> op;
        if (op == 'T') {
            cin >> A >> B; A--, B--;
            swap(age[A], age[B]);
            min_age.assign(N, LLONG_MAX);
            for (ll j = 0; j < N; j++) 
                if (!manager[j]) dfs(j, LLONG_MAX);
        } 
        else if (op == 'P') {
            cin >> E; E--;
            if (!manager[E]) 
                cout << '*' << '\n';
            else 
                cout << min(min_age[E], age[E]) << '\n';
        }
    }
    return 0;
}