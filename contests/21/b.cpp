#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, ans = 0, c= 0;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    for(ll x: a){
        if(x != 0) c++;
        else if(c) ans++, c = 0;
    }
    if(c) ans++; 
    cout << min((ll)2, ans) << endl;
}
int main(){
    ll t;       
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) solve();
}