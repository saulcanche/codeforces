#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin >> s;
    int hr = stoi(s.substr(0, 2));
    int mn = stoi(s.substr(3, 2));

    string per = (hr < 12) ? "AM" : "PM";
    if (hr == 0) {
        hr = 12;
    } else if(hr>12){
        hr -=12;
    }
    cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << mn << " " << per << "\n";

}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}