#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void decode(int encoded){
    string result;
    int aux=0;
    int index = 26;
    int decresor = 2;
    for(ll i=1; i<=26; i++)
        for(ll j=1; j<=26; j++)
            for(ll k=1; k<=26; k++){
                if(i+j+k == encoded){
                    cout<<char(96+i)<<char(96+j)<<char(96+k)<<endl;
                    return;
                }
            }

}

int main()
{
    ll t;
    cin>> t;
    for (ll i = 0; i<t; ++i){
        int encoded_word;
        cin >> encoded_word;
        decode(encoded_word);
    }
    return 0;
}  