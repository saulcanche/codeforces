#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string v = "aeiou", ans = "";
    if(n <= v.size() ) {
        for(ll i = 0; i < n; i++) ans += v[i];
        cout << ans << endl;
        return;
    }
    ll cs = n / 5, ev = n%5;
    for(ll i = 0; i < 5; i++){
        for(ll j = 0; j < cs; j++) ans += v[i];
        if(i < ev) ans += v[i];
    }
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
