#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
set<char> alpha;
vector<vector<ll>> mat;
int main(){
    cin >> n >> m;
    mat.resize(n, vector<ll> (m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> mat[i][j];
            alpha.insert(mat[i][j]);
        }
    }
    for(char c: alpha){
        dfs()
    }
}
