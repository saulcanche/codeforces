#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin >> s;
    ll ans = 0;
    for(auto c : s) ans+= c == '1'; 
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)solve();
}
