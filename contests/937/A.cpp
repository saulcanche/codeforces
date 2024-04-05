#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c;
    cin >> a >> b >> c; 
    if (a<b & b<c)
    {
        cout << "STAIR" << endl;
    } else if (a<b & b>c)
    {
        cout << "PEAK" << endl;
    } else{
        cout << "NONE" << endl;
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