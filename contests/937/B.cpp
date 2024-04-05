#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin >> n; 
    string s1="##";
    string s2="..";
    string ss1, ss2;
    if(n==1){
        cout << s1 << endl;
        cout << s1 << endl;
        return;
    }
    for (ll i = 1; i <= n; i++)
    { if(i%2==0){
        ss1 += s2;
        ss2 += s1;
    }else{
        ss1 += s1
        ss2 += s2;
    }
    }
    
    
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}