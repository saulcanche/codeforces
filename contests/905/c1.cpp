#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k, a;
    cin >> n >> k;
    bool zf = false;
    ll mul = 1, c1 = 0, mx = -1, c2 = 0;
    
    while (n--) {
        cin >> a;
        a = a % k;
        if (a == 0) zf = true;
        if (a == 1) c1++;
        if (a == 2) c2++;
        mul = (mul * a) % k;
        mx = max(mx, a);
    }
    
    if (zf || mul % k == 0) {
        cout << 0 << endl;
        return;
    }
    if (k == 4) {
        if (c1 > 0) {
            if (c2 > 0 | mx == 3) cout << 1 << endl;
            else cout << 2 << endl;
            return;
        }
    }
    cout << k - mx << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}