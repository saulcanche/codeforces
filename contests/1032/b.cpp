#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; string s;
    cin >> n;
    cin >> s;
    if(n == 3){
        if(s[0] == s[1] || s[1] == s[2]){
            cout << "YES\n";
            return;
        }
    }
    map<char, ll> freq;
    for(ll i = 0 ; i < n-1; i++){
        if(freq.count(s[i]) && freq[s[i]] > 0){
            cout << "YES\n";
            return;
        }
        freq[s[i]]++;
    }
    cout << "NO\n";
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}