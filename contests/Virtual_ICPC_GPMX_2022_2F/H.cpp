#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x; 
    cin >> n >> x;
    vector<ll> nums(n);
    for(ll &num: nums) cin >> num;
    set<ll> unique;
    for(ll num : nums) {
        if(num <= x) unique.insert(num);
    }
    vector<ll> f;
    for(ll num : unique) {
        bool is_mul = false;
        for(ll ot : unique) {
            if(ot < num && num % ot == 0) {
                is_mul = true;
                break;
            }
        }
        if(!is_mul) f.push_back(num);
    }
    vector<bool> div(x + 1, false);
    for(ll num : f) for(ll m = num; m <= x; m += num) div[m] = true;
    ll ans = 0;
    for(ll i = 1; i <= x; i++) if(div[i]) ans++;
    cout << ans << endl;
}