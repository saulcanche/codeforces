#include <bits/stdc++.h>
using namespace std;
map<long long, long long> sum_map;


long long digitSum(long long n) {
    long long sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    long long n; 
    cin >> n;
    sum_map[0] = 0;
    for (long long i = 0; i < n; i++) {
        cout << "i = " << i << endl;
        cout << "sum_map[i+1]= "<< sum_map[i+1] << endl;
        cout << "sum_map[i]= " << sum_map[i] << endl;
        cout << "digitSum(i+1)"<< digitSum(i+1) << endl;
       sum_map[i+1] += sum_map[i+1] + digitSum(i+1);
        cout << "sum_map[i+1]= "<< sum_map[i+1] << endl;
    }
    cout << "sum_map[n]=" << sum_map[n] << endl; 
}

int main() {

    long long t; 
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}