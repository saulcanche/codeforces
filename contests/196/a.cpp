#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll ans = a[n-1] - a[0];
    for (ll i = n-1; i < m; i++) ans = min(ans, a[i] - a[i-n + 1]);
    cout << ans << endl;
}