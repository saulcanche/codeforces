#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll len = 1, max_len = 1;
    for (ll i = 1; i < n; i++) {
        if (a[i] - a[i - 1] <= k) {
            len++;
        } else {
            max_len = max(max_len, len);
            len = 1;
        }
    }
    max_len = max(max_len, len); 
    
    cout << n - max_len << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}