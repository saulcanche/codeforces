#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, l, r, ans = 0;
    string s;
    cin >> n;
    cin >> s;

    l = 0; 
    r = n-1;
    while(l<r){
        if(s[r] == s[l]) break;
        r--, l++;
    }
    ans = r - l + 1;
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}