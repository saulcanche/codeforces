#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string str_b;
    cin >> str_b;
    if(str_b[0] == '1' | str_b.back() == '1'){
        cout << "YES" << endl;
        return;
    }
    bool win = false;
    for(ll i= 1; i < n; i++){
        if(str_b[i] == '1' & str_b[i-1] == '1') win = true;
    }
    cout << (win ? "YES": "NO") << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}