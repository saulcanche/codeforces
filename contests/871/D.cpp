#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll n, ll m) {
    if (n == m) return true;
    if (n % 3 != 0) return false;
    ll a = n / 3;
    ll b = 2 * n / 3;
    return solve(a, m) || solve(b, m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        cout << (solve(n, m) ? "YES" : "NO") << endl;
    }

    return 0;
}