#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;

    for (ll i = 0; i <= n; i++) {
        ans.push_back(pow(2, i));
        if(ans[i]>=n){
            break;
        }
    }

    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}
