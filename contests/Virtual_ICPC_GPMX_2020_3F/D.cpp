#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll k, n;
    string s, str_n  ="", output = "";
    cin >> s >> k;
    for(ll i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            str_n += s[i];
        } else{
            if(!str_n.empty()){
                n = stoll(str_n);
                if(n <= k){
                    while(n--) output += s[i];
                    str_n = "";
                } else{
                    cout << "unfeasible" << endl;
                    return;
                }
            } else {
                output += s[i];
            }
        }
    }
    cout << (output.size() <= k ? output: "unfeasible") << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
