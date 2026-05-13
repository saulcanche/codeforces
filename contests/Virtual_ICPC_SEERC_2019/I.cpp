#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &x: a) cin >> x;
    for(ll &x: b) cin >> x;
    /*
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    */
    ll ans = 0;
    for(auto x: a){
        ll dif = LONG_LONG_MAX;
        for(auto y: b) dif = min(abs(x-y), dif);
        ans = max(dif, ans);
    }
    cout << ans;
}
