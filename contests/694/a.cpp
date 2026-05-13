#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll sum = 0, maxS = 0;
    for(auto &i : a) {
        cin >> i;
        sum += i;
        maxS += (i + x - 1) / x; 
    }
    ll minS = (sum + x - 1) / x; 
    cout << minS << " " << maxS << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) solve();
}
