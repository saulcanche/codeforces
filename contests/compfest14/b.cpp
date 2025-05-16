#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, d, wins = 0, used = 0;
    cin >> n >> d;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end(), greater<ll>());
    for (ll i = 0; i < n; ++i) {
        ll p = (d + a[i]) / a[i]; 
        if (used + p <= n) wins++, used += p;
        else break;
    }
    cout << wins << endl;
}
