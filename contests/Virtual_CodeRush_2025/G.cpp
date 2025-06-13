#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x, even = 0, odd = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x%2) odd++;
        else even++;
    }
    cout << (even > odd? "Sebastian": "Notbastian");
}
