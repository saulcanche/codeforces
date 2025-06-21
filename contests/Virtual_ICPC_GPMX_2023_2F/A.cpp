#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool> isP(1000000, true); 
vector<bool> isS(1000000, false); 
ll k;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll k;
    string n;
    cin >> k >> n;
    isS[1] = true;
    isP[0] = isP[1] = false;  
    for(ll i = 2; i * i < 1000000; i++){
    isS[i*i] = true;  
    if(!isP[i]) continue;  
    for(ll j = i * i; j < 1000000; j += i){
        isP[j] = false;
    }
    string n_c = "";
    for(ll i = 0; i < k; i++) if(n[i] != '0') n_c += n[i];
}