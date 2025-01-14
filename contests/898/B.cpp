#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int prod = 1;
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    a[0]++;
    for(auto x: a) prod *= x;
    cout << prod << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}