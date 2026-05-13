#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
void solve() {
    ll n;
    cin >> n >> s;
    ll ans = 1;
    for(ll i = 1; i < n; i++){
        if(s[i-1] == s[i]) ans += 2;
        else ans +=3;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();
}