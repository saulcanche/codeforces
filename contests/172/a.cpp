#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
	ll n, k, sum = 0;
	cin >> n >> k;
	vector<ll> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(), a.end(), greater());
	for(ll x : a){
		if(sum + x <= k) sum += x;
		else break;
	}
	cout << k - sum << endl;
	
}
int main(){
	ll t;
	cin >> t;
	while(t--) solve();
}

