#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());
    cout << a[n/2] << endl;
    for(auto x: a) cout << abs(a[n/2] - x) << " ";
    cout << endl;
}


int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}