#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    ll ketil = n/k;
    cout <<(ketil >= m ? "Iron fist Ketil" : "King Canute") << endl;
}
