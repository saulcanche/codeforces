#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll kR = (k + n - 1) / n; 
    ll free = m - kR + 1;     
    if (free <= 0) {
        cout << m << endl;  
        return;
    }
    ll mx = (kR + free - 1) / free;  
    cout << mx << endl;
}

int main(){
    ll t;
    cin >> t;
    while (t--) solve();

    return 0;
}
