#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <limits>
using namespace std;
typedef long long ll;
ll n, m, ans =__LONG_LONG_MAX__;
vector<vector<ll>> mat;
vector<vector<bool>> used;
set<ll> stamps;
pair<ll, ll> s, g;
bool dfs(pair<ll, ll> curr);

void solve(ll d){
    if(d == 11){
        if (stamps.count(mat[s.first][s.second]) == 0 || stamps.count(mat[g.first][g.second]) == 0) return;
        used.assign(n, vector<bool>(m));
        if(dfs(s)) ans = min((ll)stamps.size(), ans);
        return;
    }
    stamps.insert(d);
    solve(d+1);
    stamps.erase(d);
    solve(d+1);
}
bool check(ll x, ll y){
    return x >= 0 && x<n && y>= 0 && y < m && !used[x][y] && stamps.count(mat[x][y]);
}

//up, down, left, right
ll dx[]= {-1, 1, 0, 0};
ll dy[]= {0, 0, -1, 1};

bool dfs(pair<ll, ll> curr){
    if(curr == g) return true;
    used[curr.first][curr.second] = true;
    for(ll i = 0; i < 4; i++){
        ll nx = curr.first + dx[i];
        ll ny = curr.second + dy[i];
        if(check(nx, ny) && dfs({nx, ny})) return true;
    }
    return false;
}
int main(){
    cin >> n >> m >> s.first >> s.second >> g.first >> g.second;
    s.first--, s.second--, g.first--, g.second--;
    mat.assign(n, vector<ll>(m));
    used.assign(n, vector<bool>(m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    solve(1);
    cout << ans<< endl; 
}