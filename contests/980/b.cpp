#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, ans = 0, current = 0, last = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++){
        current += (a[i] - last) * (n-i);
        if(current >= k) break;
        last += a[i] - last, ans++;
    }
    cout << k + ans << endl;

}
int main(){
    ll t = 1;
    cin >> t;
    while(t--) solve();
}