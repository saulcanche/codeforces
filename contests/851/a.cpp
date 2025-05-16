#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, ans = -1;
    cin >> n;
    vector<ll> a(n);

    ll total_twos = 0;
    for(auto &x : a) {
        cin >> x;
        if(x == 2) total_twos++;
    }
    ll left_twos = 0;
    for(ll i = 0; i < n-1; i++){
        if(a[i] == 2) left_twos++;
        ll right_twos = total_twos - left_twos;
        
        if(left_twos == right_twos){
            ans = i+1;
            break;
        }
    }
    
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}
