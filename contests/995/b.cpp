#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, a, b, c, sum, d;
    cin >> n >> a >> b >> c;
    sum = a + b +c;
    d = n;
    else if(n%sum == 0) cout << d;
    else if(n%sum <= a) cout << d+1;
    else if(n%sum <= a+b) cout << d+2;
    else cout << d+3;
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}