#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n < k) {
        cout << n << endl; 
    }
    else if(n == k) cout << 1 << endl;
    else {
        vector<ll> k_mul;
        k_mul.push_back(k);
        if(k == 1){
            cout << n << endl; 
            return;
        }
        while (k_mul.back() * k <= n) { 
            k_mul.push_back(k_mul.back() * k);
        }

        ll ans = 0; 

        while (n > 0 && !k_mul.empty()) {
            ll current_val = k_mul.back(); 
            ans += n / current_val;  
            n = n % current_val;
            k_mul.pop_back(); 
        }
        cout << ans + n<< endl; 
    }
}

int main(){
    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
}