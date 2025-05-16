#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, n, x, sum;
    cin >> a >> b >> n;
    sum = b;
    while(n-- && cin >> x) sum += min(a-1, x);
    cout << sum << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}