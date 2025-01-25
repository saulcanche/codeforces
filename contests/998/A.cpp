#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    ll max_fibo = 0;
    ll c1 = 0, c2 = 0, c3 = 0;
    for (ll a3 = -200; a3 <= 200; ++a3) {
        c1 = (a3 == a1 + a2);
        c2 = (a4 == a2 + a3);
        c3 = (a5 == a3 + a4);
        max_fibo = max(max_fibo, c1 + c2 + c3);
    }
    max_fibo = max(max_fibo, c1 + c2 + c3);
    cout << max_fibo << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();
}

