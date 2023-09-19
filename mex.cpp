#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x;
    long long t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        if((k)>n || x<(k-1))
        {
            cout << "-1";
        }
        else{
            long long suma=(k-1)*(k)/2;
            suma+=(x-1)*(n-k);
            cout << suma;
        }
        cout <<"\n";

    }

    return 0;
}