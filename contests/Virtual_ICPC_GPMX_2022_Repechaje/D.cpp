#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef tree<pair<ll, ll>,null_type,less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> oset;
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    ll m, a, b, op;
    cin >> m;
    map<ll, ll> nums;
    oset arr;
    for(ll i = 0; i < m; i++){
        cin >> op;
        if(op == 1){
            cin >> a;
            nums[i+1] = a;
            arr.insert({a, i+1});
        } else if(op == 2){
            cin >> b;
            arr.erase({nums[b], b});
        } else if(op == 3){
            cin >> b >> a;
            arr.erase({nums[b], b});
            nums[b] += a;
            arr.insert({nums[b], b});
        } else if(op == 4){
            cin >> b;
            cout << arr.order_of_key({nums[b], 0}) << endl;
        }
    }
}
