#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, len = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for(ll i = 0; i < n; i++){
        if(s[i] == '.') len++;
        else{
            if(len > 2) {
                cout << 2 << endl;
                return;
            }
            else ans+= len;
            len = 0;
        }
    }
    if(len>2) {
        cout << 2 << endl;
        return;
    }
    else ans+= len, len=0;
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}