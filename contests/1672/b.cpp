#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin >> s;
    bool isP = (s.back() == 'B');
    int num_A = 0;
    for(auto c : s) {
        if(c == 'A') num_A++;
        else num_A --;
        if(num_A < 0) isP = false;
    }
    cout << (isP? "YES" : "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}