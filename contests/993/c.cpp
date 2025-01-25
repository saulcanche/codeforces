#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll m, a, b, c, ans = 0;
    cin >> m >> a >> b >> c;
    if(m-a > 0) ans+=a;
    else ans+= m;
    if(m-b > 0) ans+=b;
    else ans+= m;
    ll free = 2*m - ans;
    if(free > 0){
        if(free - c > 0) ans += c;
        else ans = 2*m;
    }
    cout << ans << endl;
}
int main(){
    ll t; cin >> t;
    while(t--) solve();
}