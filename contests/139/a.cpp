#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
	string n;
	cin >> n;
	ll ans = ((n.length() - 1) * 9) + (n[0] - '0');
	cout << ans << endl;
}
int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
