#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    ll minLength = n; 

    // Iterate over all possible substrings
    for (ll ssL = 1; ssL <= n; ssL++) {
        bool valid = true;
        for (ll i = 0; i < n - ssL; i++) {
            string sc = s.substr(i, ssL);
            string sn = s.substr(i + ssL, ssL);
            if (sc != sn) {
                if (i != 0 && i != n - ssL) {
                    valid = false;
                    break;
                }
            }
        }
        if (valid && ssL < minLength) {
            minLength = ssL;
        }
    }

    cout << "ans = " << minLength << endl;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
