#include <iostream>
#include <vector>
#include <utility>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> cor(n);
    pair<ll, ll> last = {0, 0};
    for(auto &c : cor) cin >> c.first >> c.second;
    for(auto c : cor) last.first += c.first, last.second += c.second;
    last = {last.first + m, last.second + m};
    ll ans = 2*(last.first - cor[0].first) + 2*(last.second - cor[0].second); 
    cout << ans << endl;
}
void solve(){
    ll n, m;
    cin >> n >> m;
    ll x1, y1, xl, yl
    cin >> x1 >> y1;
    xl = x1;
    yl = y1;
    for(ll i = 1; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        xl+=x;
        xy+=y;
    }
    xl+=m;
    xl+=m;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}