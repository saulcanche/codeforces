#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    cout << a.back() - a.front() << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}