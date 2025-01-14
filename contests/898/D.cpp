#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
void solve(){
    ll n, k, movs = 0; 
    string str;
    cin >> n >> k >> str;
    for(ll i = 0; i < n; i++){
        if(str[i] == 'B'){
            i += k-1;
            movs++;
        }

    }
    cout << movs << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}