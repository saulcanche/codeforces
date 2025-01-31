#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    vector<ll> th(4);
    for(auto &x : th) cin >> x;
    ll d, noDamD = 0;
    cin >> d;
    ll d_copy = d;
    while(d--){
        bool dam = false;
        for(auto x: th) if(d % x == 0){
            dam = true; break;
        };
        if(!dam) noDamD ++;
    }
    cout << d_copy - noDamD;
}
