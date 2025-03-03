#include <iostream>
using namespace std;

int par(int x, int y) {
    if (x % 2 == 0) return x;
    if (y % 2 == 0) return y;
    return -1; 
}

int main() {
    int x, y, ans;
    cin >> x >> y;
    if (min(x, y) > 1) {
        int npar = par(x, y);
        if (npar != -1) {
            ans = (x * y) / 2;
        } else {
            ans = ((x / 2) * y) + (y / 2);
        }
    } else {
        ans = max(x, y) / 2;
    }
    cout << ans << endl;
    return 0;
}