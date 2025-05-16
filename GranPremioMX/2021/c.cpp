#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t, l, r;
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    ll n = 1e6;
    vector<bool> is_prime(n+1, true);
    vector<ll> primes(n+1, 0);
    is_prime[0] = is_prime[1] = false;
    ll pc = 0; //program counter ojito con el easter egggggg
    for(ll i = 2; i <= n; i++) {
        if(is_prime[i]) {
            pc++;
            if(i * i <= n) {
                for(int j = i * i; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }
        primes[i] = pc;
    }
    
    while(t--) {
        cin >> l >> r;
        cout << primes[r] - primes[l-1] << endl;
    }
}