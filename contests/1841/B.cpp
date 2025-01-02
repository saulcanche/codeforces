#include <iostream>
#include <vector>
#include <deque>
using namespace std;
typedef long long ll;
void solve(){
    ll q, x;
    bool changed = false;
    cin >> q; 
    if(q == 1){
        cout << 1;
        return;
    }
    vector<ll> ans, queries;
    ans.reserve(q);
    queries.reserve(q);
    cin >> x;
    queries.push_back(x);
    ans.push_back(1);
    q--;
    cin >> x;
    if(x < queries.back()) changed = true;
    queries.push_back(x);
    ans.push_back(1);
    q--;
    for(ll i = 0; i < q ; i++){
        cin >> x;
        if(!changed){
            if(x >= queries.back()){
                queries.push_back(x);
                ans.push_back(1);
            } else {
                if(x <= queries.front()){
                    queries.push_back(x);
                    ans.push_back(1);
                    changed = true;
                } else{
                    ans.push_back(0);
                }
            }
        } else{
            if(x >= queries.back() && x <= queries.front()){
                queries.push_back(x);
                ans.push_back(1);
            } else{
                ans.push_back(0);
            }
        }

    }
    for(auto x: ans) cout << x;
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}