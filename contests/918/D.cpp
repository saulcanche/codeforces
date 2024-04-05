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
    ll fin=ini+3;
    while (fin < n)
    {
        if (type[ini] == 'C' && type[ini + 1] == 'V' && type[ini + 2] == 'C')
        {
            if (type[fin] == 'C')
            {
                ini = fin;
                fin += 4;
                ans += str[ini];
                ans += str[ini + 1];
                ans += str[ini + 2];
                ans += '.';
            }
            else
            {
                ini += 3;
                fin += 4;
                ans += str[ini];
                ans += str[ini + 1];
                ans += '.';
            }
        }
        else if(type[ini] == 'C' && type[ini+1] = 'V'){
            ini++;
            fin++;
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
