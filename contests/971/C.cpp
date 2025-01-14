#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll x, y, k, movs = 0, y_movs = 0, x_movs = 0;
    cin >> x >> y >> k;
    x_movs += x/k;
    y_movs += y/k;
    x = x%k;
    y = y%k;
    if(x > 0) x_movs++;
    if(y > 0) y_movs++;
    movs = max(x_movs, y_movs);
    if(x_movs > y_movs){
        cout << 2*movs - 1 << endl;
    } else{
        cout << 2*movs << endl;
    }
    
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}