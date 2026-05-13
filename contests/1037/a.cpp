#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    ll minD = LLONG_MAX;
    for(char c: s){
        ll d = c-'0';
        minD = min(minD, d);
    }
    cout << minD << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}