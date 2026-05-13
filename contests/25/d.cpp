#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> p, s;
vector<pair<ll, ll>>cls, open;
void build(ll v){
    p[v] = v;
    s[v] = 1;
}
ll find_d(ll v){
    if(p[v] == v) return v;
    return p[v] = find_d(p[v]);
}
bool join(ll a, ll b){
    a = find_d(a);
    b = find_d(b);
    if(a == b) return false;
    if(s[a] < s[b]) swap(a, b);
    p[b] = a;
    s[a] += s[b];
    return true;
}
int main(){
    ll n, a, b;
    cin >> n;
    p.resize(n);
    s.resize(n);
    for(ll i = 0; i < n; i++) build(i);
    for(ll i = 0; i < n-1; i++){
        cin >> a >> b; a--, b--;
        if(!join(a, b)) cls.push_back({a+1, b+1});
    }
    for(ll i = 1; i < n; i++){
        if(join(i, 0)) open.push_back({1, i+1});
    }
    cout << open.size() << endl;
    for(ll i = 0; i < open.size(); i++){
        cout << cls[i].first << " " << cls[i].second << " "<< open[i].first << " " << open[i].second << endl;
    }
}