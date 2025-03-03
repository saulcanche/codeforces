#include <iostream>
using namespace std;

typedef long long ll;

void solve(){
    ll n; 
    cin >> n;
    if(n < 4){
        if(n == 2) cout << 66;
        else cout << -1;
    } 
    else{
        for(ll i = 4; i < n; i++) cout << 3;
        cout << (n%2 ? 6 : 3) << 366;
    }
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}