#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, acu; cin >> n;
    string t, ans; cin >> t;
    ll i=0;
    acu = 0;
    while (i<n && acu<n)
    {
        ans+= t[acu];
        i++;
        acu+=i;
    }
    cout << ans;
    
   
    
    
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}
