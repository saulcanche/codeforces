#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll x, k;
    cin >> x >> k;
    if(x%k == 0){
        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
    } else{
        cout << 1 << endl;
        cout << x << endl;
    }
}

int main(){
    ll t; cin >> t;
    while(t--) solve();
}