#include <iostream>

using namespace std;
typedef long long ll;


void solve(){
	ll n, x, sum = 0;
	cin >> n;
	n--;
	while(n-- && cin >> x) sum+=x;
	cout << -sum << endl;
}

int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
