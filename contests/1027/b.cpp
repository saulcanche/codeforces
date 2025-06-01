#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    string s;
    cin >> n >> k >> s;
    ll c1 = count(s.begin(), s.end(), '1');
    ll c0 = n - c1;
    ll mp = n/2;
    ll rp = mp - k;
    c1-= rp, c0-= rp;
    if(c1 < 0 || c0 < 0){
        cout << "NO" << endl;
        return;
    }
    if(c1 % 2 == 0 && c0 % 2 == 0){
        cout << "YES" << endl;
    } else cout << "NO" << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}