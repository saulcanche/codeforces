#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    ll n;
    string a, b;
    cin >> n >> a >> b;
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] == '1') cnt++;
        else cnt--;
        bool now = (a[i] == b[i]);
        bool next = (i + 1 < n) ? (a[i+1] == b[i+1]) : now;
        if(now != next && cnt != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n"; 
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
