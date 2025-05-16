#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    char a, b;
    cin >> a >> b;
    cout << ((a - '0') + (b - '0')) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}