#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll sum = 0;
    for(ll i = n - 2; i >= n / 3; i -= 2){
        sum += a[i];
    }
    cout << sum << '\n';
}
