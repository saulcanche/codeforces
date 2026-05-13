#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    string s;
    cin >> n;
    vector<string> a;
    a.reserve(n);
    while(n--) {
        cin >> s;
        s += s;
        a.push_back(s);
    }
    for(auto str : a){
        for(ll i = 0; i < str.size(); i++){
            string sub_str = str.substr(0, i);
            for(auto other_str : a){
                other_str.find(sub_str);
            }
        }
    }
}
