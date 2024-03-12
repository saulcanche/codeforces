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
    vector<char> letras(5);
    for(int i= 0; i< t; i++){
        int countA= 0;
        int countB= 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> letras[j];
        }
        for (int j = 0; j < 5; j++){
            if (letras[j] == 'A'){
                countA ++;
            } else if (letras[j] == 'B'){
                countB ++;
            }
        }
        if(countA > countB){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }
}