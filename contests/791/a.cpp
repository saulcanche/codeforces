#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, mx, mn;
    cin >> n;
    if(n < 4 || n % 2){
        cout << -1 << endl;
        return;
    }
    ll n2 = n / 2;
    mx = n2 / 2;
    mn = (n2 + 2) / 3;
    cout << mn << " " << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
