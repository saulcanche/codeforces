#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b;
    cin >> a >> b;
    cout << (a == 1 && b == 1? 1: b - a) << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
