#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

typedef long long ll;
using namespace std;    

void solve() {
    ll n, op1 = 0, op2 = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    if(a == b){
        cout << "0" << endl;
        return;
    }
    
    for(ll i = 0; i < n; i++){
        if(a[i] != b[i]) op1++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(ll i = 0; i < n; i++){
        if(a[i] != b[i]) op2++;
    }
    cout << min(op1, op2+1) << endl;
}

int main() {
    ll t = 1;
    cin >> t;
    while (t--) solve();
}
