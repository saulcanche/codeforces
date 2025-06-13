#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string c, p;
    cin >> c >> p;
    if (c.size() != p.size()) {
        cout << "NO";
        return 0;
    }
    string d = c + c;
    if (d.find(p) != string::npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}