#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, l;
    cin >> n >> k >> l;
    cout << ((n*k)+l-1)/l;
}
