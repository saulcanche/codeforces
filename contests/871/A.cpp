#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s, w;
    cin >> s;
    w = "codeforces";
    int ans = 0;
    for (int i = 0; i < s.length() && i < 10; i++) {
        if (s[i] != w[i]) {
            ans++;
        }
    }
    cout << ans << endl;
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}

