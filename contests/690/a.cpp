#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;

    ll left = 0, right = n - 1;
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) b[i] = a[left++];
        else b[i] = a[right--];
    }

    for (auto x : b) cout << x << " ";
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
