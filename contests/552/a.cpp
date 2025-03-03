#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    vector<ll> a(4);
    for(auto &x : a) cin >> x;  
    ll mx = *max_element(a.begin(), a.end());
    for(auto x : a) if(mx - x > 0) cout << mx-x << " ";
}
