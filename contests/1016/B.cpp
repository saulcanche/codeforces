#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s; cin >> s;
    int n = s.size(), r = n;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') continue;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(j == i) continue;
            if(j < i && s[j] != '0') cnt++;
            if(j > i) cnt++;
        }
        r = min(r, cnt);
    }
    cout << r << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--) solve();
}
