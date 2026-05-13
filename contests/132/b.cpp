#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> a, dist, distR, prefix, prefixR;

int main() {
    ll n, m;
    cin >> n >> m;
    a.resize(n);
    dist.resize(n - 1);
    distR.resize(n - 1);
    prefix.resize(n - 1);
    prefixR.resize(n - 1);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) dist[i - 1] = max(0ll, a[i - 1] - a[i]);
    }
    for (ll i = n - 2; i >= 0; i--) distR[i] = max(0ll, a[i + 1] - a[i]);
    for (ll i = 0; i < n - 1; i++)  prefix[i] = dist[i] + (i > 0 ? prefix[i - 1] : 0);
    for (ll i = n - 2; i >= 0; i--) prefixR[i] = distR[i] + (i < n - 2 ? prefixR[i + 1] : 0);
    for (ll i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        if (x < y) cout << (x > 0 ? prefix[y - 1] - prefix[x - 1] : prefix[y - 1]);
        else if (x > y) cout << ((x < n - 1) ? (prefixR[y] - prefixR[x]) : prefixR[y]);
        else cout << 0;
        cout << endl;
    }
}
