#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll k, p;
    cin >> k >> p;
    vector<ll> ps(p);
    vector<ll> d(k);
    for(auto &x: ps) cin >> x;
    sort(ps.begin(), ps.end(), greater());
    for(auto &x : d) cin >> x;
    for(auto &din: d){
        ll w = LLONG_MAX;
        ll sum = 0;
        ll w2 = LLONG_MAX;
        for(auto &pres: ps){ 
            ll comp = ((din+pres-1)/pres) * pres;
            w = min(w, comp - din);
            sum += pres;
            w2 = min(w, sum-din);
        }
        cout << min(w, w2) << endl;
    }
}
