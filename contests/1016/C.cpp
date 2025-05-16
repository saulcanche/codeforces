#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n == 2) return true;  
    if (n % 2 == 0) return false; 

    int sqrtN = sqrt(n); 
    for (int i = 3; i <= sqrtN; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(){
    ll x, k;
    cin >> x >> k;
    if(k==1){
        cout << (isPrime(x)? "YES": "NO") << endl;
        return;
    }
    if(x==1 && k == 2){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--) solve();
}
