#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cross(pair<ll, ll> &a, pair<ll, ll> &b, pair<ll, ll> &c){ 
    ll x1 = b.first - a.first;
    ll y1 = b.second - a.second;
    ll x2 = c.first - a.first;
    ll y2 = c.second - a.second;
    return (x1*y2 - y1*x2);
}
bool check(pair<ll, ll> &a, pair<ll, ll> &b, pair<ll, ll> &c, pair<ll, ll> &d) {
    return cross(a, b, c) && cross(a, b, d) && cross(a, c, d) && cross(b, c, d);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<pair<ll, ll>> p(n);
    for (auto &coor : p) cin >> coor.first >> coor.second;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            for(ll k = j; k < n; k++) {
                for(ll l = k; l < n; l++){
                    if(check(p[i], p[j], p[k], p[l])) ans++;
                }
            }
        }
    }
    cout << ans << endl;
}