#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if ((a[n-2] - a[0]) > (a[0] - a[n-2]))
    {
        cout << a[n-2] - a[0];
    } else{
        cout << a[0] - a[n-2];
    }
    
    

    
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}
