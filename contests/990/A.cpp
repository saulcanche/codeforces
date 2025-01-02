#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

set<ll> fullLayer;

void initializeFullLayer() {
    for (int i = 1; i < 100; i += 2) fullLayer.insert((ll)i * i);
}

void solve() {
    ll days, workDone = 0, daysHappy = 0, x;
    cin >> days;
    for (ll i = 0; i < days; i++) {
        cin >> x;
        workDone += x;
        if (fullLayer.find(workDone) != fullLayer.end()) daysHappy++;
    }
    cout << daysHappy << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    initializeFullLayer();

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
