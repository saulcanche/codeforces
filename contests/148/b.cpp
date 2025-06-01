#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll l = 1, r = n-1;
    while(k > 0){
        if(l < n){
            if(a[l] + a[l-1] > a[r]) r--;
            else l+= 2;
        } else{
            r--;
        } 
        k--;
    }
    ll sum = 0;
    for(ll i = l-1; i < r; i++) sum += a[i];
    cout << sum << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}