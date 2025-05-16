#include <iostream>
#include <limits.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, x, mn = LLONG_MAX;
    cin >> n;
    while(n--){
        cin >> x;
        mn = min(abs(x), mn);
    }
    cout << mn << endl;
}