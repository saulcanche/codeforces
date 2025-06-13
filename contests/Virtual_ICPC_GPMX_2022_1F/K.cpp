#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 50100;
bool isP[MAXN];
ll ans[MAXN];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, p;
    cin >> k >> p;
    isP[0] = 1;
    for (ll i = 0; i < p; i++) {
        ll x; cin >> x;
        for (ll j = 0; j < MAXN; j++) if (isP[j]) isP[j+x] = true;
    }
    ll c = 0;
    for (ll i = MAXN-1; i >= 0; i--) {
        if (isP[i]) c = 0;
        else c++;
        ans[i] = c;
    }
    while (k--) {
        ll x; cin >> x;
        cout << ans[x] << endl;
    }
}