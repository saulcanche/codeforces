#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll k; cin >> k;
    char c;
    string n = "";
    for(ll i = 0; i < k; i++){
        cin >> c;
        if(c != '0' && c != '8' && c != '6') n += c;
    }
    cout << n.size() << endl;
}