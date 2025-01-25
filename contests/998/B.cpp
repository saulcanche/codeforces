#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> p(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> p[i][j];
        }
        sort(p[i].begin(), p[i].end()); 
    }

    vector<ll> ord(n);
    iota(ord.begin(), ord.end(), 0);

    sort(ord.begin(), ord.end(), [&](ll i, ll j) {
        return p[i][0] < p[j][0]; 
    });
    ll center = -1; 
    bool can = true;
    for (ll i = 0; i < n; i++) {
        for(ll o : ord){
            if(p[o][i] < center) {
                can = false; 
                break;
            }
            else center = p[0][i];
        }
    }
    if(can) for(ll o : ord) cout << o << " ";
    else cout << -1 << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--) solve();
}
