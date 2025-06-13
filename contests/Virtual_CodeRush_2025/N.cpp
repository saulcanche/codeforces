#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    string m = "MOUNTAIN", v = "VALLEY";
    cout << (a < b && b > c ? m : v) << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
