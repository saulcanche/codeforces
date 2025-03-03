#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
void solve(){
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ans = a[0];
    for(ll i = 1; i < n; i++) ans = (ans + a[i])/2;
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}