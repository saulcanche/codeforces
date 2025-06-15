#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll i = 1; 
    while(n > 0){
        if(i >= n) break;
        if(i+2 >= n){
            i++;
            break;
        }
        ll maxE = i+1;
        ll dif = n - maxE;
        ll take = 0;
        if(i > dif-1) take = max(1ll, dif-1);
        else take = i;
        n -= take;
        i++;
    }
    cout << (i%2 == 1? "Jane": "John") << endl;
    return 0;
}