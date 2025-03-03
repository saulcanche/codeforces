#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s, ans = "";
    cin >> s;
    ll take = (ll)s.size() - 2;
    if (take < 0) take = 0; 
    for (ll i = 0; i < take; i++) {
        ans += s[i];
    }
    ans += 'i';
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) solve();
}