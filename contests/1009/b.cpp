#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n);

    for(auto &x: a) {
        cin >> x;
        sum += x;
    }
    cout << sum-n+1 << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}