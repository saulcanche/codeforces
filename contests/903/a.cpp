#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (ll op = 0; op <= 5; op++) { 
        if (x.find(s) != string::npos) {
            cout << op << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
