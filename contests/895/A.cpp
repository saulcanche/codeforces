#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c, movs;
    double target, a_diff, b_diff, min_diff;
    cin >> a >> b >> c;
    if(a-b == 0){
        cout << 0 << endl; 
        return;
    }
    target = (a + b) / (double)2;
    a_diff = abs(target - a);
    b_diff = abs(target - b);
    min_diff = min(a_diff, b_diff);
    movs = ((ll)ceil(min_diff)) / c;
    if(((ll)ceil(min_diff))%c) movs++;
    cout << movs << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}