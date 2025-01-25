#include <bits/stdc++.h>
using namespace std;

int ans(int d, int a, int b, vector<int>& nums){
    if(d == nums.size()) return (b-a);
    return max(ans(d+1, a+nums[d], b, nums), ans(d+1, a, b+nums[d], nums));
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    cout << ans(0,0,0, a) << endl;
}

