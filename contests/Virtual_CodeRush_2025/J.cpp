#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> d(m, vector<char>(n));
    for(auto &v : d) for(auto &c : v) cin >> c;
    ll ans = 0;
    for(auto &v: d){
        ll s = 0, last = -1;
        for(ll i = 0; i < n; i++){ 
            char c = v[i];
            if(last == -1 && (c == '/' || c == '\\')) last = i;
            else if(last != -1 && (c == '/' || c == '\\')) s+= i-last, last= -1;
        }
        ans += s;
    }
    cout << ans << ".00";
}
