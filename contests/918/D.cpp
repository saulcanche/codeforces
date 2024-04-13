#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    string ans;
    vector<char> str(n), type(n);
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        str[i] = c;
        if (c == 'a' || c == 'e')
        {
            type[i] = 'V';
        } else{
            type[i] = 'C';
        } 
    }
    ll ini=0; 
    while (ini <= n)
    {
        if(type[ini] == 'C' && type[ini+1]== 'V' && ini+2<n){
            if(type[ini + 2] == 'C' && ini+3<n){
                if(type[ini + 3]== 'C'){
                    ans += str[ini];
                    ans += str[ini + 1];
                    ans += str[ini + 2];
                    ans += '.';
                    ini = ini+3;
                } else if(type[ini + 3] == 'V'){
                    ans += str[ini];
                    ans += str[ini + 1];
                    ans += '.';
                    ini += 2;
                }
            } else if(ini+3==n){
                ans += str[ini];
                ans += str[ini + 1];
                ans += str[ini + 2];
                ini = n+10;
            }
        }else if(ini+2==n){
            ans += str[ini];
            ans += str[ini+1];
            ini = n+10;
        }

    }

    cout << ans << endl;
    
    

    
    
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        solve();
    }
}