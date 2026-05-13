#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m,k; cin>>n>>m>>k;
	vector<vector<ll>> a(m);
	for(ll i=0;i<k;i++){
		ll x,y; cin>>x>>y; y--; a[y].push_back(x);
	}
	vector<ll> c(m);
	for(ll i=0;i<m;i++){
		auto& v=a[i];
		for(ll j=0;j<v.size();j+=2)
			if(j+1<v.size()){
				ll x=v[j],y=v[j+1];
				c[i]+=(x==y?100:abs(x-y));
			}else c[i]+=100;
	}
	for(ll i=0;i<m;i++) cout<<c[i]<<(i<m-1?" ":"\n");
}