#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, r, b;
    cin >> n >> r >> b;

    int g = b + 1;
    int q = r / g;
    int rem = r % g;
    string ans = "";
    for (int i = 0; i < g; ++i) {
        ans += string(q + (i < rem), 'R');
        if (i < b) ans += 'B';
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
