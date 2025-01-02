#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int &x : p) cin >> x;

    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (abs(p[i] - p[i+1]) == 1 && p[i] > p[i+1]) {
                swap(p[i], p[i+1]);
                swapped = true;
            }
        }
    }

    bool isSorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (p[i] > p[i+1]) {
            isSorted = false;
            break;
        }
    }

    cout << (isSorted ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
