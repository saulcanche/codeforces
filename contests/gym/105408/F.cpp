#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    set<ll> a;
    vector<ll> b(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for( ll i = 0; i < 4; i++)
    { 
        ll x;
        cin >> x;
        a.insert(x);
    }
    for(ll i = 0; i < 5; i++){
        if(a.find(b[i]) == a.end()){
            cout << b[i];
        }
    }
}