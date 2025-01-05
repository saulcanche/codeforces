#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= ('a' - 'A');  
    }
    
    cout << s << endl;
    return 0;
}
