#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll md = 1e9 + 7;
ll fiboc[1000001];
vector<vector<ll>> mmul(vector<vector<ll>> &a, vector<vector<ll>> &b) {
    vector<vector<ll>> c(2, vector<ll>(2, 0));
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < 2; j++) {
            for (ll k = 0; k < 2; k++) {
                c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % md) % md;
            }
        }
    }
    return c;
}
ll fib(ll n) {
    if (n < 1000001) return fiboc[n];
    vector<vector<ll>> ans = {
        {1, 0},
        {0, 1}
    }, base = {
        {1, 1},
        {1, 0}
    };
    while (n) {
        if (n & 1) ans = mmul(ans, base);
        base = mmul(base, base);
        n >>= 1;
    }
    return ans[0][1];
}
int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> o(m);
    for (ll i = 0; i < m; i++) cin >> o[i];
    sort(o.begin(), o.end());
    fiboc[0] = 0;
    fiboc[1] = 1;
    for (ll i = 2; i < 1000001; i++) {
        fiboc[i] = (fiboc[i - 1] + fiboc[i - 2]) % md;
    }
    ll ans = 1;
    ll prev = 0;  
    for (ll i = 0; i < m; i++) {
        ans = (ans * fib(o[i] - prev - 1)) % md;
        prev = o[i];
    }
    ans = (ans * fib(n - prev)) % md;
    cout << ans << endl;
}
