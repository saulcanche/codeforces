#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll L, W, H, l, w, h;
    cin >> L >> W >> H >> l >> w >> h;
    ll ans = 0;
    vector<ll> box = {l, w, h};
    sort(box.begin(), box.end());
    do {
        ll x = L / box[0];
        ll y = W / box[1];
        ll z = H / box[2];
        ans = max(ans, x * y * z);
    } while(next_permutation(box.begin(), box.end()));
    cout << ans;
}
