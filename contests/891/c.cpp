#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    ll nb = n * (n - 1) / 2;
    vector<ll> b(nb);
    for (ll i = 0; i < nb; i++) cin >> b[i];
    sort(b.begin(), b.end());
    vector<ll> a;
    ll idx = 0;
    for (ll i = n - 1; i >= 1; i--) {
        a.push_back(b[idx]);
        idx += i;
    }
    a.push_back(1000000000);
    for (ll x : a) cout << x << " ";
    cout << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}

