#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
typedef long long ll;


void solve(){
	ll n, ans = LLONG_MAX;
	cin >> n;
	vector<ll> a(n);
	for(auto &x : a) cin >> x;
	bool sorted = true;
	for(ll i = 1; i < n; i++){
		if(a[i] < a[i-1]) sorted = false;
		ans = min(ans, abs(a[i] - a[i-1]) + 1);
	}
	if(ans == 0) ans++;
	ans = (ans + 1)/2;
	cout << (sorted ? ans : 0) << endl;

}

int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}
