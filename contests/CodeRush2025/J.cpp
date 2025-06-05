#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> mat(m, vector<char>(n));
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++) cin >> mat[i][j];
    }
    ll ans = 0; 
    for(auto &line : mat){
        ll l = -1, aLine = 0;
        for(ll i = 0; i < n; i++){
            if(l == -1 && (line[i] == '/' || line[i] == '\\')) l = i;
            else if(l != -1 && (line[i] == '/' || line[i] == '\\')) aLine += (i-l), l= -1;
        }
        ans += aLine;
    }
    cout << ans << ".00" << endl;
}