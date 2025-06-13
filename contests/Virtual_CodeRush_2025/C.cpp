#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<vector<ll>>> board;
ll A, B, C;
ll max_knights = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll K, x, y, z;
    cin >> A >> B >> C >> K;
    board.resize(A + 1, vector<vector<ll>>(B + 1, vector<ll>(C + 1, 0)));
    // 1 used, 0 free, -1 not allowed;
    while (K--) {
        cin >> x >> y >> z;
        board[x][y][z] = -1;
    }
    cout << max_knights;
}