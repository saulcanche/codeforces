#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(3));
    for(auto &row : v) cin >> row[0];
    for(auto &row : v) cin >> row[1];
    for(auto &row : v) cin >> row[2];
    sort(v.begin(), v.end(), [](const vector<ll> &x, const vector<ll> &y) {
        return max({x[0], x[1], x[2]}) > max({y[0], y[1], y[2]});
    });
    ll a, b, c;
    a = b = c = -1;
    ll ind = 0;
    while(a == -1 && b == -1 && c == -1){
        ll maxi = 0;
        for(ll i = 0; i < 3; i++){
            if(a != -1 && i == 0) continue;
            if(b != -1 && i == 1) continue;
            if(c != -1 && i == 2) continue;
            if(v[ind][i] > v[ind][maxi]) maxi = i;
        }
        if(maxi == 0 && a == -1) a = v[ind][0];
        else if(maxi == 1 && b == -1) b = v[ind][1];
        else if(maxi == 2 && c == -1) c = v[ind][2];
        ind++;
    }
    cout << a + b + c << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
