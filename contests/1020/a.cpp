#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, c0 = 0, c1 = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s; 
    for(ll i = 0; i < n; i++){
        if(s[i] == '0') c0; 
        else c1++;
    }
    for(ll i = 0; i < n; i++){
        if(s[i] == '0') ans += c1 + 1;
        else ans += c1 -1;
    }
    cout << ans << endl;
}
int main(){
    ll t; 
    cin >> t;
    while(t--) solve();
}