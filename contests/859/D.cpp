#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, q, acu = 0;
    cin >> n >> q;
    vector<ll> a(n), prefix(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        acu += a[i];
        prefix[i] = acu;
    }
    ll l, r, k;
    while(q--){
        cin >> l >> r >> k; 
        l--; r--; 
        ll sum_before_l = l > 0? prefix[l-1] : 0;
        ll sum_l_to_r = prefix[r] - sum_before_l;
        bool ans = (prefix.back() - sum_l_to_r + (r-l+1)*k) % 2 != 0;
        cout << (ans ? "YES" : "NO") << endl;
    }
}

int main(){
    ll t = 1;
    cin >> t;
    while(t--) solve();
}