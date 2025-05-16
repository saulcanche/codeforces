#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n * k);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll step = n / 2 + 1;
    ll index = n * k - step;
    ll sum = 0;
    for (ll i = 0; i < k; ++i) {
        sum += a[index];
        index -= step;
    }
    cout << sum << '\n';
}

int main(){
    ll t;
    cin >> t;
    while (t--) solve();
}