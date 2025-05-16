#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n; 
    vector<ll> a(n), zV(n, 0);
    for(auto &x : a) cin >> x;
    if(n%2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    } else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
    }
}
int main(){
    ll t;
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) solve();
}
