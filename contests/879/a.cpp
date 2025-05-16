#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x, ans;
    cin >> n;
    vector<ll> a(2, 0);
    while(n--){
        cin >> x;
        if(x == 1) a[1]++;
        else a[0]++;
    }
    ll dif = a[0] - a[1];
    if(dif < 0){
        if(a[0]%2 == 0) ans = 0;
        else ans = 1;
    } else{
        dif = abs(dif);
        ans = (dif + 1)/2;
        a[0]-= ((dif+1)/2);
        if(a[0]%2 != 0) ans++;
    }
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}