#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n; 
    cin >> n;
    vector<string> str(n);
    for(auto &x : str) cin >> x;
    for(auto x = str.rbegin(); x != str.rend(); ++x){
        if((*x)[0] == '#') cout << 1 << " ";
        if((*x)[1] == '#') cout << 2 << " ";
        if((*x)[2] == '#') cout << 3 << " ";
        if((*x)[3] == '#') cout << 4 << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}