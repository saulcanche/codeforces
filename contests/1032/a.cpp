#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(auto &x : a) cin >> x; 
    sort(a.begin(), a.end());
    ll l = a[0];    
    ll r = a[n-1];
    if(s < l) {
        cout << r - s << endl;
    } else if(s > r) {
        cout << s - l << endl;
    } else {
        ll op1 = (s - l) + (r - l);
        ll op2 = (r - s) + (r - l);
        cout << min(op1, op2) << endl;
    }
}
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}