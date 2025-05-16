#include <iostream>
#include <set>
#include <vector>
#include <utility>
using namespace std;
typedef long long ll;

set<pair<ll, ll>> getKnightMoves(ll x, ll y, ll a, ll b) {
    set<pair<ll, ll>> moves;
    moves.insert({x + a, y + b});
    moves.insert({x + a, y - b});
    moves.insert({x - a, y + b});
    moves.insert({x - a, y - b});
    moves.insert({x + b, y + a});
    moves.insert({x + b, y - a});
    moves.insert({x - b, y + a});
    moves.insert({x - b, y - a});
    return moves;
}
void solve() {
    ll a, b, ans = 0;
    pair<ll, ll> k, q;
    cin >> a >> b >> k.first >> k.second >> q.first >> q.second;
    set<pair<ll, ll>> kingMoves = getKnightMoves(k.first, k.second, a, b);
    set<pair<ll, ll>> queenMoves = getKnightMoves(q.first, q.second, a, b);
    for (const auto& pos : queenMoves) {
        if(kingMoves.find(pos) != kingMoves.end()) ans++;
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}