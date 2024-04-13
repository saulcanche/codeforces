#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll  n, k; cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll f, l, s;
    f = 0;
    l = n-1;
    s = 0;
    while (k>0)
    {
        if (a[f] < a[l])
        { 
        }
        
    }
    cout << s << endl;
    
    
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
