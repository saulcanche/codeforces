#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll g = a[0];
    for (ll i = 1; i < n; ++i) {
        g = gcd(g, a[i]);
    }

    cout << g * n << endl;
    return 0;
}