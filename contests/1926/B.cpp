#include <bits/stdc++.h>
#define S second
#define F first
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll vector<vll>
#define vchar vector<char>
#define vstring vector<string>
#define rep(x, g, y) for(ll x=g;x<y;x++)
#define rrep(x, g, y) for(ll x=g;x>=y;x--)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;

void solve() {
    int n; 
    cin >> n;
    vector<vector<long long>> grid(n, vector<long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            grid[i][j] = c - '0'; // Convert char to int
        }
    }
    
    bool found_triangle = false;
    for (int i = 0; i < n; i++) {
        long long row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += grid[i][j];
        }
        if (row_sum == 1) {
            found_triangle = true;
            break; 
        }
    }
    
    if (found_triangle) {
        cout << "TRIANGLE\n";
    } else {
        cout << "SQUARE\n";
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}