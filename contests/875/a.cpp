#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

void solve(){
    ll n, x;
    cin>>n;
    for(ll i = 0; i < n; i++ ){
        cin >> x;
        cout << n + 1 - x << ' ' ;
    }
    cout << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}