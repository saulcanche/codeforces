#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(d < b){
        cout << -1 << endl;
        return;
    }
    
    ll yD = d - b, newX = a + yD, movs = 0;
    if(newX < c){
        cout << -1 << endl;
        return;
    } 
    movs += yD;
    a = newX;
    movs += abs(c - a);
    cout << movs << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}