#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll ans = 0;
    vector<string> g(10);
    for(auto &x: g) cin >> x;
    
    int ring_points[] = {1, 2, 3, 4, 5};
    
    for(ll i = 0; i < 10; i++) {
        for(ll j = 0; j < 10; j++) {
            if(g[i][j] == 'X') {
                int row_dist = min(i, 9 - i);
                int col_dist = min(j, 9 - j);
                int ring_index = min(row_dist, col_dist);
                ring_index = min(ring_index, 4);
                ans += ring_points[ring_index];
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();
}