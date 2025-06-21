#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v, vs;
bool dirty = false;

void buildSort() {
    vs = v;
    sort(vs.begin(), vs.end());
    dirty = false;
}

int main(){
    ll n, q, op, a, b, k; 
    cin >> n >> q;
    v.resize(n);
    for(ll &x : v) cin >> x;
    buildSort();
    
    for(ll i = 0; i < q; i++){
        cin >> op;
        if(op == 1){
            cin >> k;
            if(binary_search(vs.begin(), vs.end(), k)) continue; // Skip if already exists
            
            v.push_back(k); // Always add to original vector
            
            if(vs.back() < k){
                vs.push_back(k); // Can append to sorted vector
            } else {
                // Need to insert in middle, so mark as dirty for rebuild
                dirty = true;
            }
        }
        else if(op == 2){
            cin >> a >> b;
            if(dirty) buildSort();
            cout << distance(lower_bound(vs.begin(), vs.end(), a), upper_bound(vs.begin(), vs.end(), b)) << endl;
        }
    }
    return 0;
}