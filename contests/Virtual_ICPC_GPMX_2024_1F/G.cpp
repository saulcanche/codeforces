#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    set<ll> unique;
    vector<ll> a, b;
    ll x;
    for(ll i = 0; i < n; i++){ 
        cin >> x;
        unique.insert(x);
    }
    if(n == 1){
        cout << "Alicius" << endl;
        return 0;
    }
    for(ll x: unique) {
        a.push_back(x); 
        b.push_back(x);
    }
    ll i;
    for(i = 0; i < a.size(); i++){
        if(b.back() == 0) break;
        for(ll j = i; j < a.size(); j++){
            b[j] -= max(a[i]-1, 1ll);
            if(b[j] < 0) b[j] = 0;
        }
    }
    cout << (i % 2 ? "Alicius" : "Bobius");
}

