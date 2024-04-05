#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << c << endl;
    } else if (a==c)
    {
        cout << b << endl;
    } else {
        cout << a << endl;
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
