#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, ans = 0, c = 1;
    string s;
    cin >> n;
    cin >> s;
    for(ll i = 1; i < n; i++){
        if(s[i-1] == s[i]) c++;
        else ans = max(ans, c+1), c = 1;
    }
    if(c) ans = max(ans, c+1);
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}