#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll distance = abs(a - b);  

    if (distance % 2 == 1) {
        cout << "NO" << endl;  
    } else {
        cout << "YES" << endl; 
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
