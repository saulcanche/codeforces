#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; string s; cin >> n >> s;
    for(ll i = 1; i < n; i++){
        if(s[i] < s[i-1]){
            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}