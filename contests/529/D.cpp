#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;

    if (a+b>=10 || a+c>= 10 || c+b >=10)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
