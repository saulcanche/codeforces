#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll x;
    cin >> x;
    cout << (x%33 ? "NO" : "YES") << endl;

}
int main(){
    ll t = 1;
    cin >> t;
    while(t--) solve();
}