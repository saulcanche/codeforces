#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    char last;
    if(c % 2 == 0) last = 'k';
    else last = 'a';
    if(last == 'a') b--;
    else a--;
    if(a == b){
        if(last == 'a') cout << "Second" << endl;
        else cout << "First" << endl;
        return;
    }
    cout << (a > b ? "First": "Second") << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}