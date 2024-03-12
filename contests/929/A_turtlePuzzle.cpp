#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll sum = 0;
        ll k;
        while (n--)
        {
            cin >> k;
            if(k<0){
                k=-1*k;
                sum += k;
            }else{
                sum += k;
            }
        }
        cout << sum << endl;
        
    }
    
}