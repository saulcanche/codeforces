#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    ll c = 0, ans = 0;
    for(ll i = 1; i <= 100; i++){
        if(n % i == 0) c++;
        else{
            ans = max(ans, c);
            c = 0;
        }
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}