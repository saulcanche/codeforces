#include <iostream>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

void solve() {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    ll n, noUsed = 0;
    cin >> n;
    
    vector<ll> s(n);
    for (auto &x : s) cin >> x;

    string ans = "";
    map<char, ll> freq;
    
    for (auto x : s) {
        if (x == 0) ans += abc[noUsed], freq[abc[noUsed]]++, noUsed++;
        else {
            for (auto it = freq.begin(); it != freq.end(); ++it) {
                if (it->second == x) {
                    ans += it->first;
                    freq[it->first]++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
