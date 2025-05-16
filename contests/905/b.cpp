#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    ll n, k;
    cin >> n;
    cin >> k;
    map<char, ll> freq;
    while(n--){
        char c;
        cin >> c;
        freq[c]++;
    }
    ll odd = 0;
    for(auto pair : freq){
        if(pair.second%2 == 1) odd++;
    }
    k -= (odd-1);
    cout << (k < 0 ? "NO" : "YES") << endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;

    while(t--) solve();
}
