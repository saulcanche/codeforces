#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        ll sum = 0;
        vector<ll> nums(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
            sum += nums[i];
        }

        bool isP = sum % n == 0;  
        if (isP) {
            ll target = sum / n;  
            for (ll i = 1; i < n-1; i++) {
                while(nums[i-1] < target){
                    nums[i-1]++;
                    nums[i+1]--;
                }
                while(nums[i-1] > target){
                    nums[i-1]--;
                    nums[i+1]++;
                }
            }
            for(auto x: nums){
                if(x != target){
                    isP = false;
                    break;
                }
            }
        }

        cout << (isP ? "YES" : "NO") << endl;
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}
