#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m;
    cin >> n >> m;
    map<ll, set<ll>> st;

    for (ll i = 0; i < n; ++i) {
        ll a, b, c;
        cin >> a >> b;
        for (ll j = 0; j < b; ++j) {
            cin >> c;
            st[a].insert(c);
        }
    }

    map<ll, set<pair<ll, char>>> cor;
    ll x = 0, y = 0, z = 0;

    for (ll i = 0; i < m; ++i) {
        ll a, c, cl;
        cin >> a >> c;
        auto it = st.find(a);

        if (it != st.end()) {
            set<ll> remaining = it->second;
            for (ll j = 0; j < c; ++j) {
                cin >> cl;
                if (it->second.count(cl)) {
                    remaining.erase(cl);
                } else {
                    cor[a].insert({cl, '-'});
                    y++;
                }
            }
            for (ll course : remaining) {
                cor[a].insert({course, '+'});
                z++;
            }
            st.erase(it);
        } else {
            for (ll j = 0; j < c; ++j) {
                cin >> cl;
                cor[a].insert({cl, '-'});
                y++;
            }
        }
    }

    for (auto& p : st) {
        for (ll course : p.second) {
            cor[p.first].insert({course, '+'});
            z++;
        }
    }

    x = cor.size();
    if (x == 0) {
        cout << "GREAT WORK! NO MISTAKES FOUND!\n";
    } else {
        for (auto& p : cor) {
            cout << p.first;
            for (auto& c : p.second) {
                cout << " " << c.second << c.first;
            }
            cout << "\n";
        }
        cout << "MISTAKES IN " << x << " STUDENTS: " << y << " NOT REQUESTED, " << z << " MISSED\n";
    }
    return 0;
}