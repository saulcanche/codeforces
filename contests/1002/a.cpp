#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    map<ll,ll> freqA, freqB;
    for(auto &x : a) {
        cin >> x;
        freqA[x]++;
    };
    for(auto &x : b){
        cin >> x;
        freqB[x]++;
    }
    cout << (freqA.size() + freqB.size() > 3 ? "YES" : "NO") << endl;
}


int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}