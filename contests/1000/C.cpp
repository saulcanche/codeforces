#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Helper function to calculate GCD
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        int n = r - l + 1;

        // Precompute GCD pairs
        vector<vector<bool>> isCoprime(n, vector<bool>(n, false));
        for (ll i = 0; i < n; i++) {
            for (ll j = i; j < n; j++) {
                isCoprime[i][j] = (gcd(l + i, l + j) == 1);
            }
        }

        // DP to find minimal coprime segments
        vector<ll> dp(n, 0);
        for (ll i = 0; i < n; i++) {
            for (ll j = i; j < n; j++) {
                if (isCoprime[i][j]) {
                    bool isMinimal = true;
                    for (ll k = i + 1; k <= j; k++) {
                        if (isCoprime[i][k] || isCoprime[k][j]) {
                            isMinimal = false;
                            break;
                        }
                    }
                    if (isMinimal) dp[j]++;
                }
            }
        }

        // Sum up the results
        ll count = accumulate(dp.begin(), dp.end(), 0LL);
        cout << count << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
