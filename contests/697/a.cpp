#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (n & (n-1) ? "YES" : "NO") << endl;
    }
}
