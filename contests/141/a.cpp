#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x: a) cin >> x;
    bool isP = a.front() == a.back();
    cout << (isP? "NO": "YES") << endl;
    if(!isP){
        cout << a.back() << " ";
        for(ll i = 0; i < n-1; i++) cout << a[i] << " ";
        cout << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}