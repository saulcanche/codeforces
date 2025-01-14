#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll n, x, sum_even = 0, sum_odd = 0;
    cin >> n;
    
    while (n--) {
        cin >> x;
        if (x % 2 == 0) sum_even += x;
        else sum_odd += x;
    }
    
    cout << (sum_even > sum_odd ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
