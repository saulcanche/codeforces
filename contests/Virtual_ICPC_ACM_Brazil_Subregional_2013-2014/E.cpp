#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, r;
    cin >> n >> r;
    vector<bool> a(n+1, false);
    ll x;
    ll rc = r;
    while(r--){
        cin >> x;
        a[x] = true;
    }
    if(n == rc){
        cout << "*";
        return 0;
    }
    for(ll i = 1; i < n+1; i++){
        if(!a[i]) cout << i << " ";
    }
}
