#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll in, ex, uni, ans;
    cin >> in >> ex >> uni;
    ans = in;
    ans += (ex/3);
    ex %= 3;
    
    if((3-ex)>uni && ex != 0){
        cout <<-1 << endl;
    }else{
        uni += ex;
        ex = 0;
        ans += (uni/3);
        uni %= 3;
        ans += (uni/2);
        ans += (uni%2);
        cout << ans << endl;
    } 
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