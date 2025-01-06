#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t, ans = 0;    
    cin >> t;
    vector<string> str(t);
    for(auto &s : str) cin >> s;
    for(auto s: str){
        ans = 0;
        if(s.size() == 1){
            if(s[0] == '_') {
                cout << 2 << endl; 
                continue;
            } else{
                cout << 1 << endl;
                continue;
            }
        }
        //at least 2 elements
        if(s[0] == '_' && s[s.size() -1] == '_' && s.size() == 2){
            cout << 3 << endl;
            continue;
        }
       if(s[0] == '_') ans++;
       if(s[s.size()-1] == '_') ans++;
       //at least 3 elements
       ll f_ = 0;
       for(ll i = 0; i < s.size(); i++){
            if(s[i] == '_') f_++;
            else{
                if(f_ > 1) ans += (f_) -1;
                f_ = 0;
            }
       }
       if(f_ > 0) ans += f_ - 1;
       cout << ans << endl;
    }
}