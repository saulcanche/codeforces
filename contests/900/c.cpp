#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, x, max_sum, min_sum;
    cin >> n >> k >> x;
    max_sum = ((n*(n+1))/2) - (((n-k)*(n+1-k))/2);
    min_sum = ((k*(k+1))/2);
    cout << (min_sum <= x && x <= max_sum? "YES": "NO") << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}