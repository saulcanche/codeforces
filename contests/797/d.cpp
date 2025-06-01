#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, k; string s;
    cin >> n >> k >> s;
    ll wc = 0, wmin;
    for(ll i = 0; i < k; i++) if(s[i] == 'W') wc++;
    wmin = wc;
    for(ll i = k; i < n; i++){
        if(s[i-k] == 'W') wc--;
        if(s[i] == 'W') wc++;
        wmin = min(wmin, wc);
    }
    cout << wmin << endl;

}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while(t--) solve();
}