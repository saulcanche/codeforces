#include <iostream>
#include <set>
#include <vector>

using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    set<ll> bf, af;
    vector<ll> b(n), a(n);
    for(ll i = 0; i < n; i++){
        bf.insert(s[i]); 
        b[i] = bf.size();
    }
    for(ll i = n-1; i >= 0; i--){ 
        af.insert(s[i]);
        a[i] = af.size();
    }
    ll ans = 0;
    for(ll i = 1; i < n; i++){
        ans = max(ans, b[i-1] + a[i]);
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}