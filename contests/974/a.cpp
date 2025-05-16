#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, gold = 0, x, ans = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> x;
        if(x >= k) gold += x;
        else if(x == 0) if(gold > 0) gold--, ans++; 
    }
    cout << ans << endl; 
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}