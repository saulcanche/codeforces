#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll c, r, s;
    cin >> c >> r >> s;
    ll spoons = (c + r + s - 1) / s;
    ll lucky = max(0LL, spoons - (r + s - 1) / s);
    ll unlucky = max(0LL, spoons - min(r, spoons));
    cout << lucky << " " << unlucky << "\n";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}