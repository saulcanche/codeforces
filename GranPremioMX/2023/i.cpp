#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll ketil = n/k;
    cout << (ketil<m? "King Canute" : "Iron fist Ketil");
    cout << endl;
}
int main(){
    ll t = 1;
    while(t--) solve();
}