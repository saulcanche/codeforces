#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    char w;
    if(a == b && b != c) w = 'C';
    if(a == c && b != a) w = 'B';
    if(b == c && b != a) w = 'A';
    if(a == b && b == c) w = '*';
    cout << w;
}
