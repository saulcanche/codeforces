#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;


void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), even, odd;
    for(auto &x: a){
        cin >> x;
        if(x%2) odd.push_back(x);
        else even.push_back(x);
    }
    cout << odd.size() + (even.size()? 1: -1) << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}