#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x;
    cin >> n;
    vector<ll> a(n);
    map<ll, vector<ll>> freq;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]].push_back(i+1);
    }
    bool isP = true;
    for(auto [k, c]: freq){
        if(c.size() == 1){
            isP = false;
            break;
        }
    }
    if(isP){
        for(auto [k, vec]: freq){
            cout << vec.back() << " ";
            for(ll i = 0; i < vec.size()-1; i++) cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    cout << -1 << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}