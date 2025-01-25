#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    string s, t;
    cin >> s >> t;
    ll i = 0;
    while (i < s.size() && i < t.size() && s[i] == t[i]) i++;
    cout << s.size() + t.size() - i + bool(i) << endl;
}

int main() {
    ll q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
