#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n-1);
    ll last;
    bool sort = true;
    cin >> last;
    for(auto &x : a){
        cin >> x;
        if(x < last) sort = false;
        last = x;
    };
    cout << (sort||k>1?"YES":"NO") << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}