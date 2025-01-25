#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve() {
    ll n, li, ls;
    cin >> n >> li >> ls;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll count = 0;
    for (ll i = 0; i < n; ++i) {
        ll left = lower_bound(a.begin() + i + 1, a.end(), li - a[i]) - a.begin();
        ll right = upper_bound(a.begin() + i + 1, a.end(), ls - a[i]) - a.begin();
        count += (right - left);
    }
    cout << count << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
