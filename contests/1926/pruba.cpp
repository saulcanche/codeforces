#include<bits/stdc++.h>
#define  S second
#define  F first
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll vector<vll>
#define vchar vector<char>
#define vstring vector<string>
#define rep(x, g, y) for(ll x=g;x<y;x++)
#define rrep(x, g, y) for(ll x=g;x>=y;x--)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n = 0;
        cin >> n;
        char figura[n+1][n+1];
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cin >> figura[j][k];
            }
        }
        bool isSquare = true;
        int countFalse = 0;
        for(int j=1; j<n; j++){
            if(memcmp(figura[j], figura[j-1], n * sizeof(char)) != 0){
                isSquare = false;
                countFalse ++;

                
            }else{
                isSquare = true;
            }
        }
        if(isSquare == true && countFalse<2){
            cout << "SQUARE\n";
        }else{
            cout << "TRIANGLE\n";
        }
    }
}