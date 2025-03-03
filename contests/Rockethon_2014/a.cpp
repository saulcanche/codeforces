#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    string s;
    cin >> s;
    ll right = 0, left = 0, ans = 0, coutw = 0;
    while(right < s.size()){ 
        if(s[left] == s[right]) coutw++, right++;
        else {
            if(coutw % 2 == 0) ans++;
            coutw = 0, left = right;
        }
    }
    if (coutw % 2 == 0) ans++;
    cout << ans;
}