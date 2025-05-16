#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    n--;
    char c;
    while(n--){
        for(ll i = 0; i < (ll)s.size() ; i++){
            cin >> c;
            if(c != '.' && s[i] == '.') s[i] = c;
        }
    }
    cout << s;
}