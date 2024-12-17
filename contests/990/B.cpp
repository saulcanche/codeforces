#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    ll n;
    cin >> n;
    cin >> s;
    map<char,ll> l;
    ll max = 0, min = 100000;
    char maxC, minC;
    for(auto c : s){
        l[c]++; 
    }
    for(auto x : l){
        if(x.second > max){
            max = x.second;
            maxC = x.first;
        }
        if(x.second < min){
            min = x.second;
            minC = x.first; 
        }
    }
    if(minC == maxC){
        for(auto &x : s){
            if(x != maxC){
                x = maxC;
                break;
            }
        }
        cout << s << endl;
        return;
    }
    for(auto &x : s){
        if(x == minC){
            x = maxC;
            break;
        }
    }
    cout << s << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}