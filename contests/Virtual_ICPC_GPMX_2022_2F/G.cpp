#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> s(n), d(n-1), a(n), b(n);
    for(ll &x: d) cin >> x;
    for(ll &x: s) cin >> x;
    a[0] = 0;
    for(ll i = 1; i < n; i++) a[i] = a[i-1] + s[i-1] + d[i-1];
    b[n-1] = 0;
    for(ll i = n-2; i >= 0; i--)  b[i] = b[i+1] + s[i+1] + d[i];
    ll meet = -1;
    for(ll i = 0; i < n; i++){
        if(abs(a[i] - b[i]) < s[i]) meet = i;
    }
    if(meet == -1){
        cout << 0 << endl;
        return 0;
    } else {
        cout << s[meet] - abs(a[meet] - b[meet]) << endl;
    }
}