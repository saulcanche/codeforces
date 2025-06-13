#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll max_val = 1LL << 16;
    vector<ll> p;
    for (ll i = 0; i < max_val; i++) {
        ll x = i;
        string h, r;
        while (x) {
            h += (x % 2) + '0';
            x /= 2;
        }
        r = h;
        reverse(r.begin(), r.end());
        vector<string> s;
        s.push_back(r + '0' + h);
        s.push_back(r + '1' + h);
        s.push_back(r + h);
        for (auto &str : s) {
            ll result = 0;
            ll bin = 1;
            for(auto c: str){
                if(c == '1') result += bin;
                bin *= 2;
            }
            if(result %2) p.push_back(result);
        }
    }
    sort(p.begin(), p.end());
    ll q;
    cin >> q;
    while (q--) {
        ll a, b;
        cin >> a >> b;
        auto it1 = lower_bound(p.begin(), p.end(), a);
        auto it2 = upper_bound(p.begin(), p.end(), b);
        cout << distance(it1, it2) << endl;
    }
    return 0;
}