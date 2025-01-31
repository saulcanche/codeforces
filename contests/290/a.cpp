#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n, m;
    cin >> n >> m;
    bool c = true;
    for(ll i = 0; i < n; i++){
        if((i+1) % 2 == 0 && c) {
            for(ll j = 0; j < m-1; j++) cout << '.';
            cout << '#' << endl;
            c = false;
        }
        else if((i+1) % 2 == 0){
            cout << '#';
            for(ll j = 0; j < m-1; j++) cout << '.';
            cout << endl;
            c = true;
        } else{
            for(ll j = 0; j < m; j++) cout << '#' ;
            cout << endl;
        }
    }
}