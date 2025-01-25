#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n, x, p = 0, ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x==-1 && p>0) p--;
        else if(x== -1 && p==0) ans++;
        else p+= x;
    }
    cout << ans << endl;
}