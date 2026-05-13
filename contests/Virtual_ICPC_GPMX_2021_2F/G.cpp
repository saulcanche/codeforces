#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, M;
vector<vector<char>> grid;
vector<vector<ll>> dp;
ll dx[] = {-1, -1, -1,  0, 1, 1, 1,  0};
ll dy[] = {-1,  0,  1,  1, 1, 0, -1, -1};
bool check(pair<ll, ll> v) {
    return v.first >= 0 && v.first < N && v.second >= 0 && v.second < M;
}
ll dfs(pair<ll, ll> v) {
    if(dp[v.first][v.second] != -1) return dp[v.first][v.second];
    ll best = 1;
    for (ll i = 0; i < 8; i++) {
        pair<ll, ll> u = {v.first + dx[i], v.second + dy[i]};
        if (check(u) && grid[u.first][u.second] == grid[v.first][v.second] + 1) {
            best = max(best, 1 + dfs(u));
        }
    }
    return dp[v.first][v.second] = best;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> M;
    grid.resize(N, vector<char>(M));
    dp.resize(N, vector<ll>(M, -1));
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < M; j++) {
            ans = max(ans, dfs({i, j})); 
        }
    }
    cout << ans;
}
