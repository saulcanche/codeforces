#include <iostream>
#include <utility>
using namespace std;

typedef long long ll;

int cuadrante(pair<ll, ll> p){
    if(p.first==0 && p.second==0) return 0;
    if(p.first>=0 && p.second>0) return 1;
    if(p.first<=0 && p.second>0) return 2;
    if(p.first<=0 && p.second<0) return 3;
    if(p.first>=0 && p.second<0) return 4;
}
int main(){
    pair<ll, ll> s, t, p;

    cin >> s.first >> s.second;
    cin >> t.first >> t.second;
    cin >> p.first >> p.second;


}