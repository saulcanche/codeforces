#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &p: a) cin >> p;
    for(ll i = 1; i < n-1; i++){
        if(a[i-1] < a[i] && a[i] > a[i+1]) {
            cout << "YES" << endl <<  i << " " << i+1 << " " << i+2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}