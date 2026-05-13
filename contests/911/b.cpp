#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    a = a%2;
    b = b%2;
    c = c%2;
    ll ansa, ansb, ansc;
    ansa = ansb = ansc = 0;
    if(a == c) ansb = 1;
    if(a == b) ansc = 1;
    if(b == c) ansa = 1;
    cout << ansa <<" " <<  ansb << " "<<  ansc << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}