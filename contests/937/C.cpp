#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    ll ans=0;
    cin >> n;
    vector<ll> a(3);
    for(ll i=0; i<n; i++){
        cin >> a[0] >> a[1] >> a[2];
        if((a[0]+ a[1]+ a[2]) > 1) ans++;
    }
    cout << ans << endl;
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}