#include <iostream>
typedef long long ll;
using namespace std;
void solve(){
    ll n, m;
    bool isP = false;
    cin >> m >> n;
    if(m > 5 && m % n == 0) isP = true;
    cout << (isP? "YES" : "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}