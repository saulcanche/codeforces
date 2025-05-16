#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll k, n;
    cin >> n >> k;
    vector<ll> a(n);
    bool zf = false;
    ll mul = 1;
    for(auto &x: a){
        cin >> x;
        x = x%k;
        if(x == 0) zf = true;
        mul *= x; 
    }
    if(zf | mul%k == 0){
        cout << 0 << endl;
        return;
    }
    auto mx = max_element(a.begin(), a.end());
    if((*mx) == 1 && k == 4){
        ll c1 = 0;
        for(auto x: a) if(x == 1) c1++;
        if(c1>1){
            cout << 2 << endl;
            return;
        }
    }
    cout << k - (*mx) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}