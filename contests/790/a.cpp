#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll sumA = 0, sumB = 0;
        for(ll i = 0; i < 3; i++) sumA += s[i] - '0';
        for(ll i = 3; i < 6; i++) sumB += s[i] - '0';
        cout << (sumA == sumB ? "YES" : "NO") << endl;
    }
}