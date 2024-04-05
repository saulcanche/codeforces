#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    vector<vector<char>> square(3, vector<char>(3));
    map<char, int> missLetter;
    missLetter['A'] = 0;
    missLetter['B'] = 0;
    missLetter['C'] = 0;
    bool missing = false;

    // Read the square
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin >> square[i][j];
            if (square[i][j] == '?') {
                missing = true;
            }
        }
        
        if (missing) {
            for (char c : square[i]) {
                missLetter[c]++;
            }
            missing = false; 
        }
    }

   
    if (missLetter['A'] == 1 && missLetter['B'] == 1) {
        cout << 'C';
    } else if (missLetter['B'] == 1 && missLetter['C'] == 1) {
        cout << 'A';
    } else {
        cout << 'B';
    }
    cout << endl; 
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
