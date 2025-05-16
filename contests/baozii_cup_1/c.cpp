#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> ones;
    if(s[0] == '1'){
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') ones.push_back(i);
    }
    cout << "YES" << endl;
    cout << ones.size() << endl;
    for(auto it = ones.rbegin(); it != ones.rend(); it++) cout << *it << " ";
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}