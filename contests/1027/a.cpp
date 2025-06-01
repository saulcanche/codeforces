#include <bits/stdc++.h>
using namespace std;
typedef long long ll;   

void solve(){
    string s;
    cin >> s;
    ll n = stoll(s);
    ll sq = (ll)sqrt(n);
    if(sq * sq == n) cout << 0 << " " << sq;
    else cout << -1;
    cout << endl;
}


int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
