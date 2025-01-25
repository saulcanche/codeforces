#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin >> s;
    string ans = "";
    for(auto c : s){
        if(c == 'q') ans += 'p';
        else if(c == 'p') ans += 'q';
        else ans+= 'w';
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}