#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n, k;
    cin >> n >> k;
    string t[n];
    int ans = n;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] != t[0]){
            ans--;
        }
    }
    cout << ans << endl;
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}