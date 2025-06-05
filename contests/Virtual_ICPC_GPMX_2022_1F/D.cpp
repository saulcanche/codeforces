#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;

struct Matrix {
    vector<vector<ll>> mat;
    int rows, cols;
    Matrix(int r, int c) : rows(r), cols(c), mat(r, vector<ll>(c)) {}
    Matrix operator*(const Matrix &b) const {
        Matrix res(rows, b.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < b.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    res.mat[i][j] = (res.mat[i][j] + mat[i][k] * b.mat[k][j]) % md;
        return res;
    }
    static Matrix identity(int size) {
        Matrix I(size, size);
        for (int i = 0; i < size; ++i) I.mat[i][i] = 1;
        return I;
    }
    Matrix pow(ll n) const {
        Matrix base = *this, result = identity(rows);
        while (n) {
            if (n % 2) result = result * base;
            base = base * base;
            n >>= 1;
        }
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n, m, k;
    cin >> n >> m >> k;
    Matrix adj(n + 1, n + 1);
    for (ll i = 0; i < m; ++i) {
        ll a, b; cin >> a >> b;
        adj.mat[a][b] = 1;
        adj.mat[b][a] = 1;
    }
    Matrix paths = adj.pow(k);
    ll ans = 0;
    for (ll i = 1; i <= n; ++i) ans = (ans % md + paths.mat[1][i] % md) % md;
    cout << ans << endl;
}
