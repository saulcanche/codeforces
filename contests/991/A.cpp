#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll t; cin >> t;
    while (t--) {
        int n, m; 
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int t_len = 0; 
        int x = 0; // w fit

        for (int i = 0; i < n; ++i) {
            int w_l = words[i].length();
            if (t_len + w_l <= m) {
                t_len += w_l;
                ++x;
            } else {
                break; 
            }
        }

        cout << x << endl;
    }
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
    return 0;
}
