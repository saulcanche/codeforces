#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> oset;

/* UTILS */
#define PI 3.1415926535897932384626433832795
ll min(ll a, int b) { return a < b ? a : b; }
ll min(int a, ll b) { return a < b ? a : b; }
ll max(ll a, int b) { return a > b ? a : b; }
ll max(int a, ll b) { return a > b ? a : b; }
ll mcd(ll a, ll b) { return b == 0 ? a : mcd(b, a % b); }
ll mcm(ll a, ll b) { return a / mcd(a, b) * b; }
string to_upper(string a) {
    for (char &c : a) if (c >= 'a' && c <= 'z') c -= 'a' - 'A';
    return a;
}
string to_lower(string a) {
    for (char &c : a) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return a;
}
bool prime(ll a) {
    if (a == 1) return false;
    for (ll i = 2; i * i <= a; ++i)
        if (a % i == 0) return false;
    return true;
}
const ll oo = 1e18 + 1;
const ll mod = 1e9 + 7;

/*
ll binpow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}
*/
/*
ll modpow(ll a, ll b) {
    a %= mod;
    ll ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
*/

/*
// Requires global fact[] array
ll cmod(ll n, ll k) {
    ll den = modpow((fact[k] * fact[n - k]) % mod, mod - 2);
    return (fact[n] * den) % mod;
}
*/

/*
vector<ll> pi(const string& s) {
    vector<ll> p(s.size());
    for (int i = 1; i < (int)s.size(); ++i) {
        ll g = p[i-1];
        while (g && s[i] != s[g]) g = p[g-1];
        p[i] = g + (s[i] == s[g]);
    }
    return p;
}

vector<ll> match(const string& s, const string& pat) {
    string t = pat + '\0' + s;
    vector<ll> p = pi(t), res;
    for (int i = pat.size() + 1; i < (int)t.size(); ++i)
        if (p[i] == pat.size()) 
            res.push_back(i - 2 * pat.size());
    return res;
}
*/
/*
struct Matrix {
    vector<vector<ll>> mat;
    int rows, cols;
    Matrix(int r, int c) : rows(r), cols(c), mat(r, vector<ll>(c)) {}
    Matrix operator*(const Matrix& b) const {
        Matrix res(rows, b.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < b.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    res.mat[i][j] = (res.mat[i][j] + mat[i][k] * b.mat[k][j]) % mod;
        return res;
    }
    static Matrix identity(int size) {
        Matrix I(size, size);
        for (int i = 0; i < size; ++i) I.mat[i][i] = 1;
        return I;
    }
    Matrix pow(ll n) const {
        Matrix base = *this;
        Matrix res = identity(rows);
        while (n) {
            if (n & 1) res = res * base;
            base = base * base;
            n >>= 1;
        }
        return res;
    }
};
*/
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}