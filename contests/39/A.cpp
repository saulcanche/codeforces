#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, b = 0, c = 0, ans = 0;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        if(x > 0) b += x; 
        else c += x;
    }
    cout << b - c << endl;
}
