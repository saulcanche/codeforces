#include <iostream>

using namespace std;
typedef long long ll;

void solve(){
	ll x, ans = 1;
	cin >> x;
	while(x>3){
		ans *= 2;
		x /= 4;
	}
	cout << ans << endl;
}
int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
