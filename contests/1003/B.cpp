#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    for(ll i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]){
            cout << 1 << endl;
            return;
        }
    };
    cout << s.size() << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}
