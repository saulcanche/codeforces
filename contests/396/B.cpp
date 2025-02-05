#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
typedef long long ll;
void solve(){ 
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool isP = false;
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(ll i = 2; i < n; i++){
        if(a[i-2] + a[i-1] > a[i]) isP = true; 
    }
    cout << (isP ? "YES" : "NO") <<endl;
}

int main(){
    ll t = 1;
    while(t--) solve();
}