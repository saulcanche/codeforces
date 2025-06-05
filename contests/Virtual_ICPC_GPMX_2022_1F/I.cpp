#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, ans = 0;
    cin >> n;
    string str_n = to_string(n);
    for(ll i= 0; i < str_n.size(); i++){ 
        ll d = str_n[i] - '0';
        if(d == 0) continue;
        if(n%d == 0) ans++;
    }
    cout << ans << endl;
}
