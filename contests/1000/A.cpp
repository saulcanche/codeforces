#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    vector<pair<ll, ll>> test_cases(t);
    ll max_r = 0;
    
    for (ll i = 0; i < t; i++) {
        cin >> test_cases[i].first >> test_cases[i].second;
        max_r = max(max_r, test_cases[i].second);
    }

    vector<int> phi(max_r + 1);
    for (ll i = 0; i <= max_r; i++) phi[i] = i;

    for (ll i = 2; i <= max_r; i++) {
        if (phi[i] == i) { 
            for (ll j = i; j <= max_r; j += i) {
                phi[j] *= (i - 1);
                phi[j] /= i;
            }
        }
    }

    for (const auto& [l, r] : test_cases) {
        if (l == r) {
            cout << 1 << endl;
            continue;
        }
        
        ll count = 0;
        for (ll i = l; i <= r; i++) {
            count += phi[i];
        }
        cout << count << endl;
}
}
