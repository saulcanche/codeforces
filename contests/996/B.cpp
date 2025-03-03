#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, sum_a = 0, sum_b = 0;
    cin >> n;
    vector<ll> a(n), b(n);

    for (auto &x : a) {
        cin >> x;
        sum_a += x;
    }
    for (auto &x : b) {
        cin >> x;
        sum_b += x;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    for(ll i = 0; i < n; i++){
        if(b[i] < a[i]){
            sum_a -= (n*(b[i]-a[i]) - 1);
            sum_a ++;
        }
    }

    if (sum_a < sum_b) {
        cout << "NO" << endl;
        return;}
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
