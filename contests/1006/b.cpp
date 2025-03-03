#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n < 3){
        cout << 0 << endl;
        return;
    }
    ll c_ = 0, c__ = 0;
    for(auto c : s) {
        if(c == '_') c_++;
        else c__++;
    }
    if(c_ < 1 || c__ < 2){
        cout << 0 << endl;
        return;
    }
    ll half_c__ = c__ / 2;
    ll ans = half_c__ * c_ * (half_c__ + c__ % 2);
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}