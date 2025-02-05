#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << (s == "YES"? "YES" : "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}