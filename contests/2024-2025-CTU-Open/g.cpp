#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
bool isPr(ll num) {
    if (num < 2) return false;
    ll sqrN = sqrt(num);
    for (ll i = 2; i <= sqrN; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
string rm0(const string& n) {
    size_t it = n.find_first_not_of('0');
    return (it == string::npos) ? "0" : n.substr(it);
}
int maxCons(string n) {
    n = rm0(n);
    if (n.empty() || !isPr(stoi(n))) return 0;
    int mx = 1;
    for (size_t i = 0; i < n.size(); i++) {
        string copy = n;
        copy.erase(i, 1);
        mx = max(mx, 1 + maxCons(copy));
    }
    return mx;
}

int main() {
    string n;
    cin >> n;
    cout << maxCons(n) << endl;
}
