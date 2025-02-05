#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    cout << n/min(x, y) + (n%min(x, y) !=0) << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1; 
    cin >> t;
    while(t--) solve();
}