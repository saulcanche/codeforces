#include <iostream>
#include <limits>
using namespace std;
typedef long long ll;


void solve(){
    ll ac = 0, bc = 0;
    string s, sU = "";
    cin >> s;
    sU += s[0];
    if(s[0] == 'a') ac++;
    for(ll i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) continue;
        if(s[i]== 'a') ac++;
        sU += s[i];
        
    }
    bc = sU.size() - ac;

    if((bc % 2) != (ac % 2)){
        cout << s << endl;
        return;
    }
    s[0] = (s[0] == 'a' ? 'b' : 'a');
    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}