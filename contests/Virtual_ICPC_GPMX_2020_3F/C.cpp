#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
const ll INV2 = 500000004;

ll nC2(ll n) {
    n %= mod;
    return (n * (n - 1) % mod * INV2) % mod;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t, n, k, tr, ans;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ans = 0;
        n%=mod;
        k%= mod;
        tr = n+1;
        tr%=mod;
        ans += tr;
        ans = (tr % mod) + (nC2(tr) % mod);
        ans %= mod;
        ans = ((ans%mod) * (((k+1)%mod) % mod))%mod;
        cout << ans << endl;
    }
}
