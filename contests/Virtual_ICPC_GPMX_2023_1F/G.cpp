#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<bool> janeW(n, false);
    for (ll i = 1; i < n; i++){
        janeW[i] = true;
    }
    cout << (janeW[n]? "Jane": "John") << endl;
    return 0;
}