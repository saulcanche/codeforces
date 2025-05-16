#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    string n;
    cin >> n;
    vector<int> ans;
    if((n.back() - '0') % 2 == 0) ans.push_back(2);
    ll sum = 0; 
    for(char d : n) sum += d - '0';
    if(sum%3 == 0)  ans.push_back(3);
    if(n.size() >= 2){
    int lastTwo = (n[n.size()-2] - '0') * 10 + (n[n.size()-1] - '0');
    if(lastTwo % 4 == 0) ans.push_back(4);
    } else {
        if((n[0] - '0') % 4 == 0) ans.push_back(4);
    } 
    if((n.back() - '0') % 5 == 0) ans.push_back(5); 

    bool t2 = false, t3 = false;
    for(int x : ans){
        if(x == 2) t2 = true;
        if(x == 3) t3 = true;
    }
    if(t2 && t3) ans.push_back(6);

    if(ans.empty()){
        cout << -1;
    } else{
        for(size_t i = 0; i < ans.size(); ++i){
            cout << ans[i];
            if(i + 1 < ans.size()) cout << " ";
        }
    }
    cout << endl;
}
int main(){
    ll t;
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) solve();
}