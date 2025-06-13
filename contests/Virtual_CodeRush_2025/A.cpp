#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    map<ll, set<ll>> m;
    map<ll, set<pair<ll, ll>>> d;
    for (ll i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (d[a].insert({b, c}).second) m[a].insert(b);
    }
    for (auto &[p, d_s] : d) cout << p << " " << m[p].size() << " " << d_s.size() << endl;
}