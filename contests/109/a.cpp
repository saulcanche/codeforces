#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n, x; cin >> n;
    cin >> x; n--;
    ll g = x, w = x, amazing = 0;
    while(n--){
        cin >> x;
        if(x > g) g = x, amazing++;
        else if(x < w) w = x, amazing++;
    }
    cout << amazing << endl;
}