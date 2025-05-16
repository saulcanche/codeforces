#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s; 
    ll target = b * k;
    if(s < target || s > target + (k-1)*n){
        cout << -1 << endl;
        return;
    }
    vector<ll> a(n,0);
    a[0] = target;
    s -= target;
    for(ll i = 0; i < n; i++){
        ll add = min(s, k-1);
        a[i] += add;
        s -= add;
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) solve();
}
