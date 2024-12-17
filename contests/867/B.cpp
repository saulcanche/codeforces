#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> nums(n);

    for (ll &x : nums) {
        cin >> x; 
    }

    sort(nums.begin(), nums.end());

    ll prod1 = nums[0] * nums[1];
    ll prod2 = nums[n-1] * nums[n-2];

    cout << max(prod1, prod2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
