#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll ans = 0, a, b, c;
    cin >> a >> b >> c;
    ans = (a * 2);
    if(c > 1){
        ans += ((b * 2) + 1);
        ans += 2;
        c -= 2;
    }
    ans += (c/2)*3;
    cout << ans << endl;
}