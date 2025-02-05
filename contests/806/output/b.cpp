#include <iostream>
#include <set>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> unique;
    for(auto c: s) unique.insert(c);
    cout << n + unique.size() << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}