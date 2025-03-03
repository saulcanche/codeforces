#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;


void solve(){
    vector<ll> bottons = {5, 2, 1};
    ll a, b, c, ans;
    cin >> a >> b; 
    c = abs(a-b);
    for(ll x: bottons) ans += c/x, c = c%x;
    cout << ans << endl;
}
int main(){
    ll t = 1;
    while(t--) solve();
}