#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), gap;
    for(auto &gs: a) cin >> gs;
    ll last = 0;
    for(auto gs: a){
        gap.push_back(gs - last);
        last = gs;
    }
    gap.push_back(2*(x-last));
    ll mx = -1;
    for(auto x : gap) mx = max(mx, x);
    cout << mx << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}