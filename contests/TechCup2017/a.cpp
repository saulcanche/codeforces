#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll start, goal;
vector<ll> path;
bool isP = false;
void dfs(ll s){
    if(s == goal){
        isP = true;
        cout << "YES" << endl;
        cout << path.size() << endl;
        for(auto &x : path) cout << x << " ";
        cout << endl;
        return;
    }
    if(s > goal){
        return;
    }
    path.push_back(s*10 + 1);
    dfs(s*10 + 1);
    path.pop_back();
    path.push_back(s*2);
    dfs(s*2);
    path.pop_back();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> start >> goal;
    path.push_back(start);
    dfs(start);
    if(!isP) cout << "NO" << endl;
}