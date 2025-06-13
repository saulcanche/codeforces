#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, x;
    cin >> n >> k;
    set<ll> unique;
    ll ans = 1;

    for (ll i = 0; i < n; i++) {
        cin >> x;
        if (!unique.count(x)) {
            if (unique.size() == k) {
                unique.clear();
                ans++;
            }
            unique.insert(x);
        }
    }
    cout << ans << endl;
}