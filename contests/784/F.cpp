#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> w(n);
    for (auto &x : w) cin >> x;
    
    ll l = n - 1, r = 0;  
    ll lw = 0, rw = 0;
    ll max_candies = 0;

    while (r <= l) {
        if (lw == rw) max_candies = (n - 1 - l) + r; 
        if (lw < rw) lw += w[l--];  
        else rw += w[r++];  
    }

    if (lw == rw) max_candies = (n - 1 - l) + r;
    cout << max_candies << endl;
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
