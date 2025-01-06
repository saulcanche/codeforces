#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sumT = 0, sumA = 0;
    cin >> n;
    vector<ll> c(n);
    for(ll &x : c) {
        cin >> x;
        sumT += x;
    }
    sort(c.begin(), c.end(), greater());
    ll i;
    for(i = 0; sumA <= sumT-sumA && i<n; i++){
        sumA += c[i];
    }
    cout << i << endl;
}