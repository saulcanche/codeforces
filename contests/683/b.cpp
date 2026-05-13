#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m;
    cin >> n >> m;
    ll neq = 0, x, minVal = LLONG_MAX, sum = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> x;
            minVal = min(minVal, abs(x));
            if(x<0) neq++;
            sum += abs(x);
        }
    }
    cout << (neq%2 == 0? sum: sum - minVal*2) << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}