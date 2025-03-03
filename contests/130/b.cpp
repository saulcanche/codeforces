#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> p(n), prefix(n);
    ll acum = 0;
    for(auto &x : p) cin >> x;
    sort(p.begin(), p.end());
    for(ll i = 0; i < n; i++) acum += p[i], prefix[i] = acum;
    while(q--){
        ll x, y;
        cin >> x >> y;
        cout << prefix[n-x+y] - prefix[n-x] << endl;
    }
}