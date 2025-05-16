#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, c, diff;
    cin >> a >> b >> c;
    bool c1 = (b - (c - b)) >= a && (b - (c - b)) % a == 0 && (b - (c - b)) != 0;
    bool c2 = (c - a) % 2 == 0 && (a + (c - a)/2) >= b && (a + (c - a)/2) % b == 0 && (a + (c - a)/2) != 0;
    bool c3 = (a + 2*(b - a)) >= c && (a + 2*(b - a)) % c == 0 && (a + 2*(b - a)) != 0;
    cout << (c1 || c2 || c3 ? "YES": "NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}