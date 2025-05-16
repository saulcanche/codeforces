#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    if(x != 1){
        cout << "YES" << endl;
        cout << n << endl;
        while(n--) cout << 1 << " ";
        cout << endl;
        return;
    }
    //x == 1
    if(k == 1) {
        cout << "NO" << endl;
        return;
    }
    if(n%2 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        n+=2
        while(n-=2) cout << 2 << " ";
        cout << endl;
        return;
    } else{
        if(k < 3) {
            cout << "NO" << endl;
            return;
        } else{
            if((n%3) > 1){
                cout << "YES" << endl;
                cout << n/3 + 1 << endl;
                ll times = n/3;
                while(times-=3) cout << 3 << " " << endl;
                cout << 2 << endl;
                cout << endl;
                return;
            } else{
                cout << "NO" << endl;
                return;
            }
        }
    
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}