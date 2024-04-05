#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, x, acu = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        acu += x;
    }

    ll raiz = sqrt(acu);
    if (raiz * raiz == acu) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
