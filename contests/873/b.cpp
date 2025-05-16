#include <iostream>
#include <limits>
#include <vector>
using namespace std;
typedef long long ll;


void solve(){
    ll n, mn = __LONG_LONG_MAX__;
    cin >> n;
    vector<ll> p(n+1);
    for(ll i = 1; i < n+1; i++) cin >> p[i];

    for(ll i = 1; i < n+1; i++){
        if(p[i] != i) mn = min(mn, abs(p[i] - i));
    }
    cout << mn << endl;
}

int main(){
    ll t;
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) solve();
}