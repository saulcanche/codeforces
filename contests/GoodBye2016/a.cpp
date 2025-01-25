#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, k, t, t_now = 0, i;
    cin >> n >> k;
    t = 240 - k; 
    for(i = 1; i <= n; i++) { 
        t_now += (5 * i); 
        if(t_now > t) { 
            i--; 
            break;
        }
    }
    cout << min(i, n) << endl; 
}
