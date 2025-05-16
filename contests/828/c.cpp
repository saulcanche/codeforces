#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n, mx = 0, last_g = -1;
    char c;
    string s;
    cin >> n >> c >> s;

    string doubled = s + s;
    for (ll i = 2 * n - 1; i >= 0; --i) {
        if (doubled[i] == 'g') {
            last_g = i;
        }
        if (i < n && doubled[i] == c && last_g != -1) {
            mx = max(mx, last_g - i);
        }
    }

    cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}