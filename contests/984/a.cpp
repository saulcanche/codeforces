#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    
    bool isP = true;
    for (ll i = 1; i < n; i++) {
        ll diff = abs(a[i] - a[i - 1]);
        if (diff != 5 && diff != 7) {
            isP = false;
            break;
        }
    }
    cout << (isP ? "YES" : "NO") << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}