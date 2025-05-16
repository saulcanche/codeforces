#include <iostream>
using namespace std;
typedef long long ll;
//hola
void solve(){
    ll n, bits = 0, x = 0, nc, max = 0;
    cin >> n >> x;
    nc = n;
    while(nc>0) bits++, nc>>=1;
    if ((n & (n - 1)) == 0) {
        if(x == ((1ll << (bits-1)) - 1)) max = ((1ll << (bits)) - 2);
        else if(x == n) max = (1ll << (bits-1)) -1;
        else max = (1ll << (bits)) -1;
    } else{
        if(n == 3) {
            if(x == 1 | x == 2) max = x;
            else max = 3;
        }
        else max = (1LL << (bits)) - 1;
    }
    cout <<  max << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}