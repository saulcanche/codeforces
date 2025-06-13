#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    ll m;
    cin >> m;
    map<ll, ll> nums;
    ll op, x, y;
    vector<ll> a;
    for (ll i = 0; i < m; i++) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            a.push_back(x);
            nums[x]++;
        } else if (op == 2) {
            cin >> x; x--;
            ll val = a[x];
            nums[val] = max(0LL, nums[val] - 1);
        } else if (op == 3) {
            cin >> x >> y; x--;
            nums[a[x]] = max(0LL, nums[a[x]]-1);
            a[x] += y;
            nums[a[x]]++;
        } else if (op == 4) {
            cin >> x;
            x--;
            ll val = a[x];
            ll count = 0;
            for (auto it = nums.begin(); it != nums.end() && it->first < val; ++it) {
                count += it->second;
            }
            cout << count << endl;
        }
    }
    return 0;
}