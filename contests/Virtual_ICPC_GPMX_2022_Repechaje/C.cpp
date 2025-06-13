#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, m; cin >> n >> m;
    map<ll, ll> em;
    ll sum = 0, s, q;
    for (ll i = 0; i < n; i++) {
        cin >> s;
        em[s]++;
        sum += s;
    }
    for (ll i = 0; i < m; i++) {
        cin >> q;
        auto it = em.upper_bound(q);
        while (it != em.end()) {
            ll val = it->first;
            ll count = it->second;
            sum -= (val - q) * count;
            em[q] += count;
            auto toErase = it++;
            em.erase(toErase);
        }
        cout << sum << endl;
    }
}
