#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> h(n), mx(n), ans(n);
    for(auto &x : h) cin >> x;
    mx[h.size()-1] = h.back();
    for(ll i = n-2; i >= 0; i--) mx[i] = max(h[i], mx[i+1]);
    mx.push_back(0);
    for(ll i = 0; i < n; i++) ans[i] = mx[i+1] > h[i] ? mx[i+1] - h[i] + 1: 0;
    for(auto x : ans) cout << x << " ";
}

