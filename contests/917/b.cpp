#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<string> seen;
ll ans = 0;
string s;
void dfs() {
    if (seen.count(s)) return;
    seen.insert(s);
    ans++;
    ll n = s.size();
    if (n >= 1) {
        char last = s.back();
        s.pop_back();
        dfs();
        s.push_back(last);
    }
    if (n >= 2) {
        char last = s.back(); s.pop_back();
        char penultimate = s.back(); s.pop_back();
        s.push_back(last); 
        dfs();
        s.pop_back();
        s.push_back(penultimate);
        s.push_back(last);
    }
}
void solve() {
    ll n;
    cin >> n >> s;
    seen.clear();
    ans = 0;
    dfs();
    cout << ans - 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();
}