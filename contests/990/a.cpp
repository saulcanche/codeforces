#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> a(2, vector<ll>(n));
    for(ll i = 0; i < n; i++) cin >> a[0][i];
    for(ll i = 0; i < n; i++) cin >> a[1][i];
    ll mxBF, mxAF = INT_MIN, sumAF = 0, sumBF = 0;
    if(n == 1){
        cout << a[0][0] + a[1][0] << endl;
        return;
    }
    for(ll i = 0; i < n; i++){
        if(a[0][i] > a[1][i]) sumAF += a[0][i], mxBF= max(mxBF, a[1][i]);
        else sumAF += a[1][i], mxBF = max(a[0][i], mxBF);
    }
    ll ans = sumBF + sumAF + max(mxBF, mxAF);
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}