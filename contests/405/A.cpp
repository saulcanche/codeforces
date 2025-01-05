#include <iostream>

using namespace std; 
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, years = 0;
    cin >> a >> b;
    while(a <= b){
        a*=3;
        b*=2;
        years++;
    }
    cout << years << endl;
}
