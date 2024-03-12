#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i=0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sumMax = a[0] + n;
        ll frecActual = 0;
        ll frecMax = 0;
        for(ll i=0; i < n; i++){
            if(sumMax-a[i] < n && sumMax-a[i] > 0){
                frecActual++;
            } else {
                frecMax = max(frecMax, frecActual);
                frecActual = 1;
                sumMax = a[i] + n;
            }
            // Skip duplicates
            while(i+1 < n && a[i] == a[i+1]) {
                i++;
            }
        }
        frecMax = max(frecMax, frecActual); 
        sumMax = a[n-1] + 1;
        frecActual = 0;

        for(ll i= n-1; i >= 0; i--){
            if(sumMax-a[i] < n && sumMax-a[i] > 0){
                frecActual++;
            } else {
                frecMax = max(frecMax, frecActual);
                frecActual = 1;
                sumMax = a[i] + 1;
            }
            // Skip duplicates
            while(i-1 >= 0 && a[i] == a[i-1]) {
                i--;
            }
        }
        frecMax = max(frecMax, frecActual); 

        cout << frecMax << endl; 
    }
    return 0;
}