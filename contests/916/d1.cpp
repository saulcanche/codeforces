#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n), b(n), c(n);
    auto cmp = [](const pair<ll, ll>& x, const pair<ll, ll>& y) {
        return x.first > y.first;
    };
    for(ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i; 
    }
    for(ll i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i; 
    }
    for(ll i = 0; i < n; i++){
        cin >> c[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);
    ll K = min(10LL, n); 
    ll maxSum = 0;
    for(int i = 0; i < K; i++) {
        for(int j = 0; j < K; j++) {
            for(int k = 0; k < K; k++) {
                ll idxA = a[i].second;
                ll idxB = b[j].second;
                ll idxC = c[k].second;
                if(idxA != idxB && idxA != idxC && idxB != idxC) {
                    ll sum = a[i].first + b[j].first + c[k].first;
                    maxSum = max(maxSum, sum);
                }
            }
        }
    }
    cout << maxSum << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}