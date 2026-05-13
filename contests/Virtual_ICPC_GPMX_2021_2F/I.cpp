#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void mul(ll &n){
    string s = to_string(n);
    ll ans = 1;
    for(char c : s){
        if(c == '0') {
            n = 0;
            return;
        }
        ans *= (c - '0');
    }
    n = ans;
}

void solve(){
    ll n;
    cin >> n;
    ll c = 0;
    while(n >= 10) {
        mul(n);
        c++;
    }
    cout << c << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
