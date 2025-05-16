#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    cout << (n%3 == 0 ? "Second" : "First") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}