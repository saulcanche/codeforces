#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, ans = 0;
    cin >> n;
    string s, u = "";
    cin >> s;
    u += s[0];
    for(ll i = 1; i < n; i++) if(s[i] != s[i-1]) u+=s[i];
    for(char c: u) if(c == '1') ans +=2;
    cout << (u.back() == '1' ? ans-1 : ans) << endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}