#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<int> a(2*n);
    ll s_on = 0;
    for(auto &x : a){
        cin >> x;
        if(x) s_on++;
    }
    cout << min(s_on/2 + (s_on%2), n) << " " << min(s_on, n) << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}