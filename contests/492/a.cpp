#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ll n, bills = 0;
    cin >> n;
    vector<ll> b = {1, 5, 10, 20, 100};
    while(n){
        bills += n / b.back();
        n = n % b.back();
        b.pop_back();
    }
    cout << bills << endl;
}