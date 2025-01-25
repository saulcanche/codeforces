#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    vector<ll> x(3);
    for(auto &a : x) cin >> a;
    sort(x.begin(), x.end());
    cout << x.back() - x.front() << endl;
}