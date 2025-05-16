#include <iostream>
using namespace std;
typedef long long ll;


void solve(){
	ll n, x, sum = 0;
	cin >> n;
	while(n-- && cin >> x) sum+= x;
	cout << (sum%2 == 0? "YES": "NO") << endl;
}

int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
