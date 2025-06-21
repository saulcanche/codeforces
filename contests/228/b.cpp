#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<bool>> used;
vector<vector<char>> board;
ll dx[4] = {1, -1, 0, 0};
ll dy[4] = {0, 0, 1, -1};
ll n;
bool check(ll i, ll j) {
    if (i < 0 || i >= n || j < 0 || j >= n || used[i][j] || board[i][j] != '#') 
        return false;
    return true;
}
void cruz(ll i, ll j) {
    ll count = 1;
    for (ll d = 0; d < 4; d++) {
        if (check(i + dx[d], j + dy[d])) count++;
    }
    if (count == 5) {
        used[i][j] = true;
        for (ll d = 0; d < 4; d++) used[i + dx[d]][j + dy[d]] = true;
    }
}

int main() {
    cin >> n;
    board.resize(n, vector<char>(n));
    used.resize(n, vector<bool>(n, false));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == '.') used[i][j] = true;
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (board[i][j] == '#' && !used[i][j]) 
                cruz(i, j);
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (!used[i][j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
}