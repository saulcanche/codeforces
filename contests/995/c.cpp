#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

void solve(){
    ll n, m, k; 
    cin >> n >> m >> k;
    vector<ll> a(m), b(n+1, 0), sum(n + 1, 0);
    for(auto &x : a) cin >> x;
    for(ll i = 0; i < k; i++){
        ll x; cin >> x;
        b[x]++;
    } 
    for(ll i = 1; i <= n; i++) sum[i] = (b[i] != 0) + sum[i - 1];

    string ans = "";
    for(ll i = 0; i < m; i++){
        ll pos = a[i];
        if(sum[pos - 1] == pos - 1 && sum[n] - sum[a[i]] == n - pos) ans += '1';
        else ans += '0';
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t = 1; cin >> t;
    while(t--) solve();
}
