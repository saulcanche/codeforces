#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, k;
    cin >> n >> k;
    vector<bitset<4>> problems(n);
    unordered_set<bitset<4>> unique;
    bool isP = false;
    for(ll i = 0; i < n; i++) {
        bitset<4> b;
        for(ll j = 0; j < k; j++) {
            int temp;
            cin >> temp;
            b[j] = temp;
        }
        problems[i] = b;
        if (b.count() == 0) isP = true;
        unique.insert(b);
    }
    if(isP){
        cout << "YES" << endl;
        return 0;
    }
    vector<bitset<4>> v(unique.begin(), unique.end());
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = i; j < v.size(); ++j) {
            if(i == j) continue;
            bitset<4> a = v[i], b = v[j];
            bitset<4> both = a & b; 
            if (both.count() * 2 <= k) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}

