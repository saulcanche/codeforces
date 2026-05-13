#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, d;
    cin >> n >> d;
    vector<char> a(n);
    for(char &x: a) cin >> x;
    ll i = 0, c = 0;
    bool jump = false;
    while(i < n - 1){
        jump = false;
        for(ll j = d; j >= 1; j--){
            if(i + j < n && a[i + j] == '1'){
                i += j;
                c++;
                jump = true;
                break;
            }
        }
        if(!jump) break;
    }
    cout << (jump ? c : -1) << endl;
}
