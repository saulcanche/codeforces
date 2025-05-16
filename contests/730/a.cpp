#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << " " << 0 << endl;
        return;
    }
    ll gcdMax = abs(a-b);
    cout << gcdMax << " " << min(a % gcdMax, gcdMax - a % gcdMax) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}