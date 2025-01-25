#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string a, b, c;
    bool isP = true;
    cin >> a >> b >> c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if(a.size() == c.size()){
        for(ll i= 0; i < (ll)a.size(); i++){
            if(a[i] != c[i]){
                isP = false;
                break;
            }
        }
    } else isP = false;
    cout << (isP ? "YES": "NO") << endl;
}