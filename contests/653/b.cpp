#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    ll c2 = 0, c3 = 0;
    while(n%2 == 0) n/= 2, c2++;
    while(n%3 == 0) n/= 3, c3++;
    cout << (n == 1 && c2 <= c3 ? 2 * c3-c2: -1) << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}