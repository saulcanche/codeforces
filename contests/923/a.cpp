#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s; 
    vector<ll> blacks;
    for(ll i = 0; i < n; i++) if(s[i] == 'B') blacks.push_back(i+1);
    ll f = blacks.front();
    ll l = blacks.back();
    cout << l-f + 1 << endl;
}
int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--) solve();
}