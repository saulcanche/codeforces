#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, m, b; 
    cin >> n >> m;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    
    if(n == 1){  // A single element is always non-decreasing
        cout << "YES" << endl;
        return;
    }
    
    cin >> b;

    for(ll i = 1; i < n; i++){
        if(a[i-1] > a[i]) {  
            ll new_val = b - a[i-1];
            if(new_val < a[i]) { 
                a[i-1] = new_val;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    ll t;
    cin >> t;
    while(t--) solve();
}
