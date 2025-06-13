#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q;
    map<char, char> tr;
    ll last = 'a';
    for(ll i = 2; i < 10; i++){
        char v = i + '0';
        if(i == 7 || i == 9) {
            tr[(char)last++] = v;
            tr[(char)last++] = v;
            tr[(char)last++] = v;
            tr[(char)last++] = v;
        }
        else {
            tr[(char)last++] = v;
            tr[(char)last++] = v;
            tr[(char)last++] = v;
        }
    }
    cin >> n >> q;
    string s;
    map<string, ll> iden;
    for(ll i = 0; i < n; i++){
        cin >> s;
        string temp = "";
        for(char c : s){
            temp += tr[c];
        }
        iden[temp]++;
    }
    for(ll i = 0; i < q; i++){
        cin >> s;
        cout << (iden.count(s) ? iden[s] : 0) << endl;
    }
}