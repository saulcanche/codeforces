#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, zc = 0, oc = 0;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a){
        cin >> x;
        if(x == 0) zc++;
        if(x == 1) oc++;
    }
    ll ans = (1ll << zc) * oc++;
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
