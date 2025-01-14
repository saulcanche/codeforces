#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (gcd(a, b) == 1) {
            cout << 1 << endl;
            cout << a << " " << b << endl;
        } else {
            cout << 2 << endl;
            cout << a - 1 << " " << b - 1 << endl;
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
