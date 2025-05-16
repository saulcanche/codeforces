#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    ll zc = 0; 
    for(auto x : s) if(x=='0') zc++;
    ll oc = s.length() - zc;
    cout << (min(zc, oc) % 2 == 1? "DA": "NET") << endl;
}
int main(){
    ll t; cin >> t;
    while(t--) solve();
}