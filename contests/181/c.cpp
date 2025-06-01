#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, n;
ll ans = 0;
ll md = 1e9+7;
bool valid_sum(ll num) {
    string s = to_string(num);
    char ca = '0' + a, cb = '0' + b;
    for (char c : s) {
        if (c != ca && c != cb) return false;
    }
    return true;
}
void solve(ll sum, ll d){
    if(d == n){
        if(valid_sum(sum)) ans = (ans%md + 1%md) % md;
        return;
    }
    solve(sum+a, d+1);
    solve(sum+b, d+1);
}
int main(){
    cin >> a >> b >> n;
    solve(0, 0);
    cout << ans << endl;
}