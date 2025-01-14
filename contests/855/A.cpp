#include <iostream>
#include <cctype>
#include <string> 

typedef long long ll;
using namespace std;
void solve() {
    int n;
    string str;
    cin >> n >> str;
    string noR_str = ""; 
    noR_str += tolower(str[0]);
    for(ll i = 1; i < n ; i++){
        char c = tolower(str[i]);
        if(c == noR_str.back()) continue;
        else noR_str += c;
    }
    cout << (noR_str == "meow" ? "YES" : "NO") << endl;
    }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t; 
    while (t--) {
        solve();
    }
}
