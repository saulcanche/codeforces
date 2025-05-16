#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
   vector<ll> a(n);
    map<ll, ll> freq;
    for(auto &x : a){
        cin >> x;
        freq[x]++;
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    ll maxF = -1, op = 0;
    for(auto &x : freq) maxF = max(maxF, x.second);
    while(maxF<n){
        ll exMax = maxF;
        maxF *= 2;
        op++;
        ll dif = maxF - exMax;
        if((exMax + dif) >= n){
            op += (n - exMax);
            break;
        } else{
            op += dif;
        }
    }
    cout << op << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
}