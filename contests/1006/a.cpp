#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, p;
    cin >> n >> k >> p;
    if(k == 0){
        cout << 0 << endl;
        return;
    }
    cout << ((n * p) >= abs(k) ? abs(k) / p + bool(abs(k)%p) : -1) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}