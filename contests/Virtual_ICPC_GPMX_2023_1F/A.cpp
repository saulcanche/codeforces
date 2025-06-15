#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    map<string, ll> freq;
    while (n--) {
        ll x;
        cin >> x;
        string alias = "";
        for (ll i = 0; i < x; i++) {
            string s; cin >> s;
            alias += s[0];
        }
        freq[alias]++; 
    }
    ll unique = 0;
    for (auto& pair : freq) if (pair.second == 1) unique++;
    cout << unique << endl;
}