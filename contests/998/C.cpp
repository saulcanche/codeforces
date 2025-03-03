#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll max = 0;
    int left = 0, right = n-1;
    while(left < right){
        if(a[left] + a[right] == k) max++, left++, right--;
        else if(a[left] + a[right] > k) right--;
        else left++;
    }
    cout << max << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--)solve();
}
