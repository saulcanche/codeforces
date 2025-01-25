#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, target;
    bool isP = true;
    for(auto &x : a){
        cin >> x;
        sum += x;
    }
    target = sum/n;
    for(ll i = 1; i < n; ++i){
        if(a[i-1] < target) {
            isP = false;
            break;
        } else if(a[i-1] > target){
            a[i] += a[i-1] - target;
            a[i-1] = target;
        }
    }
    cout << (isP ? "YES" : "NO") << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}