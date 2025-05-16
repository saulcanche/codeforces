#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll k, n, w;
    cin >> k >> n >> w;
    for(ll i = 1; i < w+1; i++){
        ll c = k*i;
        n -= c;
    }
    cout << (n>0? 0: abs(n)) << endl;
}