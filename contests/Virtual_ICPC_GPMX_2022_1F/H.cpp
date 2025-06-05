#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if(n == 4){
        cout << 1;
        return 0;
    }
    if(n < 4){
        cout << 0;
        return 0;
    }
    ll u = n/4;
    ll r = n%4;
    cout << (r>1? u*(u+1): u*u);
}
