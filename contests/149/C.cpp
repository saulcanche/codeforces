#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    vector<string> b_str(t);
    for(auto &s: b_str) cin >> s;
    for(auto &s: b_str){
        if(s[0] == '?') s[0] = '0';
        if(s[s.size()-1] == '?') s[s.size() -1] = '1';
        for(ll i = 1; i < s.size()-1; i++){
            if(s[i] == '?'){
                if(s[i-1] == '0' ) s[i] = '0';
                else s[i] = '1';
            }
        }
    }
    for(auto s: b_str) cout << s << endl;
}