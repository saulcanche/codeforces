#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    for(ll i = 1; i <= s.size()/2; i++){
        if(s.size() % i != 0) continue;
        string aux = s.substr(0, i);
        ll n = s.size() / aux.size();
        string test = "";
        while(n--) test += aux;
        if(test == s){
            cout << aux << endl;
            return 0;
        }
    }
    cout << s << endl;
}
