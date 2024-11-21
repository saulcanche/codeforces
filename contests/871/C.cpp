#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, sb, tb;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end());

    sb = LLONG_MAX;
    tb = LLONG_MAX;
    ll h1_time = LLONG_MAX;
    ll h2_time = LLONG_MAX;

    for (ll i = 0; i < n; i++) {
        if (p[i].second == 11) {
            sb = min(sb, p[i].first);
        }
        if (p[i].second == 1 && sb != LLONG_MAX) {
            h1_time = min(h1_time, p[i].first);
        }
        if (p[i].second == 10 && sb != LLONG_MAX) {
            h2_time = min(h2_time, p[i].first);
        }
    }

    if (h1_time != LLONG_MAX && h2_time != LLONG_MAX) {
            tb = h1_time + h2_time;
        }
    ll result = min(sb, tb);
    if (result == LLONG_MAX) {
        cout << -1;
    } else {
        cout << result;
    }
}


int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        solve();
    }
}
