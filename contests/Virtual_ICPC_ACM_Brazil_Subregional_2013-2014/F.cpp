#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n), prefix(n);
    ll sum = 0;
    set<ll> find_p;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        prefix[i] = (i > 0 ? prefix[i-1] + a[i] : a[i]);
        find_p.insert(prefix[i]);
    }
    if(sum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    find_p.insert(0);
    ll arc_length = sum / 3;
    set<tuple<ll, ll, ll>> ans;
    for (ll x : prefix) {
        ll second = (x + arc_length) % sum;
        ll third = (x + 2 * arc_length) % sum;
        if (find_p.count(second) && find_p.count(third)) {
            ans.insert({x, second, third});
        }
    }
    cout << ans.size()/3 << endl;
    return 0;
}