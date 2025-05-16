#include <iostream>
#include <vector>
#include <map> 
using namespace std;
typedef long long ll;
void solve(){
    string s, sub, newS = ""; cin >> s >> sub;
    map<char, ll> fsub, fnewS;
    for(char c : sub) fsub[c]++;
    for(ll i = 0; i < s.size(); i++){
        if(fsub.find(s[i]) != fsub.end()) newS += s[i];
    }
    for(char c: newS) fnewS[c]++;
    
    for(auto& pair: fsub){
        char c = pair.first;
        ll required = pair.second;
        ll available = fnewS[c];
        
        if(available < required) {
            cout << "NO\n";
            return;
        }
        
        ll toDelete = available - required;
        ll pos = 0;
        while(toDelete > 0 && pos < newS.size()) {
            if(newS[pos] == c) {
                newS.erase(pos, 1);
                toDelete--;
            } else {
                pos++;
            }
        }
    }
    cout << (newS == sub ? "YES\n" : "NO\n");
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}