#include <iostream>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;
    ll c=0, mxd = 0;
    bool hasR = false;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == 'R') hasR = true, mxd = max(c, mxd), c = 0;
        else c++;
    }
    mxd = max(c, mxd);
    cout << (hasR ? mxd + 1 : s.size() + 1) << endl;
}
int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--) solve();
}