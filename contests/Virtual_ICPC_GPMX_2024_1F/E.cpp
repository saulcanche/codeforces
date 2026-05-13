#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b, k;
    cin >> a >> b >> k;
    for(ll i = 1; i <= k; i++) cout << a*i + b << " ";
}
