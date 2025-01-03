#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n;
    cin >> k;
    vector<ll> a;
    a.reserve(n);
    for(ll i= 0; i < n; i++){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll breakPoint = 0;
    for(ll i=1; i < n; i++){
        if(a[i] - a[i-1] > k) {
            breakPoint = i;
            break;
        }
    }
    ll ans = min(breakPoint, n-breakPoint);
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cin.tie(0);
    ll t;
    cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}