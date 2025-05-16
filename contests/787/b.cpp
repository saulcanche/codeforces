#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    for(ll i = n-1; i >= 1; i--){
        while(a[i] <= a[i-1] && a[i-1] > 0) a[i-1] >>= 1, ans++;
        if(a[i-1] >= a[i]){
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}