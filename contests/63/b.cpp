#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<char> a(n);
    vector<int> ocho;
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == '8') ocho.push_back(i);
    } 
    ll movs = n -11;
    if(ocho.empty()){
        cout << "NO" << endl;
        return 0;
    }
    for(auto x: ocho){
        if(x == movs || x == movs/2) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
