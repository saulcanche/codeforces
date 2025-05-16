#include <iostream>
#include <limits>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin >> s;

    ll c0 = 0, c1 = 0, n = s.size(), t = 0;
    for(char c: s){
        if(c == '0') c0++;
        else c1++;
    }
    for(char c: s){
        if(c == '0'){
            if(c1 == 0) break;
            c1--;
        } else{
            if(c0 == 0) break;
            c0--;
        }
        t++;
    }
    cout << n -t << endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}