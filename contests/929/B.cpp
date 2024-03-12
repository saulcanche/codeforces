#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while (t--)
    {
        ll moves = 0;
        ll n; cin >> n;
        ll sum=0;
        bool found2 = false;
        while (n--)
        {
            ll k; cin >> k;
            if (k%2==0)
            {
                found2 = true;
            }
            sum += k;
            
        }
        if(sum%3 > 0){
            if(found2 == true){
                moves = 1;
            } else{
                moves = 2;
            }
        }
        cout << "moves= "<< moves << endl;
    }
    
}