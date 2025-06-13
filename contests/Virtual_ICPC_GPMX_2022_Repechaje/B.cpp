#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<ll, ll> s, g;
ll N, M, ans = 12;
vector<vector<ll>> mat;
set<ll> stamps;
vector<vector<bool>> used;
bool check(ll x, ll y){
    return x >= 0 && y >= 0 && x < N && y < M && !used[x][y] && stamps.count(mat[x][y]);
}
ll dy[] = {-1, 1, 0, 0};
ll dx[] = {0, 0, -1, 1};
bool dfs(ll x, ll y){
    if(x == g.first && y == g.second) return true;
    used[x][y] = true;
    for(ll i = 0; i < 4; i++) if(check(x+dx[i], y+dy[i]) && dfs(x+dx[i], y+dy[i])) return true;
    return false;
}
void trySet(ll d){
    if(d == 11){
        if(!stamps.count(mat[g.first][g.second]) || !stamps.count(mat[s.first][s.second])) return;
        used.assign(N, vector<bool>(M, false));
        if(dfs(s.first, s.second)) ans = min((ll)stamps.size(), ans);
        return;
    }
    stamps.insert(d);
    trySet(d+1);
    stamps.erase(d);
    trySet(d+1);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> M >> s.first >> s.second >> g.first >> g.second;
    s.first--, s.second--, g.first--, g.second--;
    mat.resize(N, vector<ll>(M));
    used.resize(N, vector<bool> (M, false));
    for(ll i = 0; i < N; i++) for(ll j = 0; j < M; j++) cin >> mat[i][j];
    trySet(1);
    cout << ans;
}
