#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m;
    string a, b;
    cin >> n >> m;
    cin >> a >> b;
    ll k = 0; 
    ll j = 0; 

    for (ll i = 0; i < m && j < n; i++) {
        // if current character of b matches the character needed from a
        if (b[i] == a[j]) {
            k++; // increment the count of matching characters
            j++; // move to the next character in string a
        }
    }

    cout << k << "\n"; // output the maximum possible number k
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}
