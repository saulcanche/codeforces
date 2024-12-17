#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for(auto &x : nums) cin >> x;
    bool isYes = false;
    for (ll i = 0; i < n; i++) {
        if (nums[i] == (i + 1)) {
            isYes = true;
            break;
        }
        if (nums[i] < (i + 1)) {
            isYes = true;
            break;
        }
    }
    cout << (isYes ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}