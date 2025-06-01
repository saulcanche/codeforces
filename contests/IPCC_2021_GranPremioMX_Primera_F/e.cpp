#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll r, c, q;
pair<ll, ll> target;
vector<vector<char>> mat;
vector<vector<ll>> dis;

bool check(ll x, ll y){
    return x >= 0 && x < r && y >= 0 && y < c && mat[x][y] != '#' && mat[x][y] != 'X';
}

char solve(ll x, ll y){ 
    char c = mat[x][y];
    if(c == '#') return 'W';
    if(c == 'X') return 'X';
    if(c == 'E') return 'E';
    if(c == '.'){
        if(dis[x][y] == -1) return '?';
        // priority: L, D, R, U
        ll dx[] = {0, 1, 0, -1};
        ll dy[] = {-1, 0, 1, 0};
        char dir_char[] = {'L', 'D', 'R', 'U'};
        for(ll i = 0; i < 4; i++){
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if(check(nx, ny) && dis[nx][ny] != -1 && dis[nx][ny] < dis[x][y]){
                return dir_char[i];
            }
        }
    }
    return '?'; 
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c;
    mat.resize(r, vector<char>(c));
    dis.resize(r, vector<ll>(c, -1));
    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'E') target = {i, j};
        }
    }
    queue<pair<ll, ll>> bfs;
    bfs.push(target);
    dis[target.first][target.second] = 0;
    ll dx[] = {1, -1, 0, 0};
    ll dy[] = {0, 0, 1, -1};
    while(!bfs.empty()){
        auto curr = bfs.front();
        bfs.pop();
        
        for(ll i = 0; i < 4; i++){
            ll nx = curr.first + dx[i];
            ll ny = curr.second + dy[i];
            if(check(nx, ny) && dis[nx][ny] == -1){
                dis[nx][ny] = dis[curr.first][curr.second] + 1;
                bfs.push({nx, ny});
            }
        }
    }
    
    cin >> q;
    for(ll i = 0; i < q; i++){
        ll x, y;
        cin >> x >> y;
        cout << solve(x-1, y-1) << endl;
    }
}