#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    long long n, k;
    cin >> n >> k;
    bool isP = (n % 2 == 0) || (n >= k && (n - k) % 2 == 0);
    
    cout << (isP ? "YES" : "NO") << endl;
}

int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
