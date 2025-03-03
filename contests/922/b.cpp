#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n; 

    vector<pair<ll, ll>> a(n); 

    for(ll i = 0; i < n; i++) cin >> a[i].first; 
    for(ll i = 0; i < n; i++) cin >> a[i].second; 

    sort(a.begin(), a.end());

    for(auto& p : a){ 
        cout << p.first << " "; 
    }
    cout << endl;
    for(auto& p : a){ 
        cout << p.second << " "; 
    }
    cout << endl;
}

int main(){
    ll t;
    cin >> t; 
    while(t--) solve();
}
