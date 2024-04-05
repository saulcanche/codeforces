#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
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
    for (ll i = 0; i < n; i++)
    {    
        cout << type[i];
    }
    cout << endl;
    

    
    
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        solve();
    }
}
