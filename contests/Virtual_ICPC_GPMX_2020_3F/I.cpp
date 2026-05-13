#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<ll> books(3);
    for(ll &x: books) cin >> x;
    sort(books.begin(), books.end(), greater());
    ll acu = 0, ans = 0;
    for(ll &x: books) {
        if(x + acu >= 500){
            ans+= x+acu-100;
            acu = 0;
        } else{
            acu += x;
        }
    };
    cout << ans + acu;
}
