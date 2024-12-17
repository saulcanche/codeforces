#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n, pos = 0;
    char d;
    cin >> n >> d;
    string num;
    cin >> num;
    pos = num.size();
    for(int i = 0; i < num.size() ; i++){
        if(num[i] < d){
            pos = i;
            break;
        }
    }
    cout << num.substr(0, pos) + d + num.substr(pos, num.size()) << endl; 

    
}
int main(){
   std::cin.tie(nullptr);
   std::ios_base::sync_with_stdio(false);
   ll t; 
   cin >> t;
   while(t--){
    solve();
   }
}