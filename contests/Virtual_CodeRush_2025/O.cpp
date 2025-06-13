#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<string> v = {"43", "4f", "44", "45", "3a", "52", "55", "53", "48", "3a", "54", "45", "43"};
    for (auto h : v) {
        cout << (char)stoi(h, nullptr, 16);
    }
    return 0;
}
