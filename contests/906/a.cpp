#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

void solve(){
    ll n, nCopy, x;
    map<ll, ll> rep; 
    cin >> n;
    nCopy = n;
    while(nCopy-- && cin >> x) rep[x]++;
    bool isP = false;
    if(rep.size() <= 2) {
        auto first = rep.begin()->second;
        auto last = rep.rbegin()->second;
        if(abs(first - last) <= 1) isP = true;
    } 
    cout << (isP? "YES": "NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}