#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> oset;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q; 
    cin >> n >> q;
    oset nums;  
    map<ll, set<ll>> index;
    for(ll i = 0; i < n; i++){
        ll val; 
        cin >> val;
        nums.insert({val, i});
        index[val].insert(i);
    }
    while(q--){
        ll op;
        cin >> op;
        if(op == 1){
            ll k;
            cin >> k;
            if(index.count(k)) continue;
            auto it = index.upper_bound(k);
            if(it == index.end()){
                ll newIdx = n;
                n++;
                nums.insert({k, newIdx});
                index[k].insert(newIdx);
            } else {
                ll oldVal = it->first;
                ll idx = *(it->second.begin());
                nums.erase({oldVal, idx});
                it->second.erase(idx);
                if(it->second.empty()) index.erase(oldVal);
                nums.insert({k, idx});
                index[k].insert(idx);
            }
        } else {
            ll a, b;
            cin >> a >> b;
            ll left = nums.order_of_key({a, 0});  
            ll right = nums.order_of_key({b+1, 0}); 
            cout << right - left << endl;
        }
    }
}