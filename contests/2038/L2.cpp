#include <iostream>

using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    int need25, need21, need18;
    ans += n/2;
    need21 = n%2;
    if(need21){
        ans++;
        need18 = n - n/2 - 2;
        ans+= need18/3;
        if(need18%3){
            if(need18%3 == 2){
                ans+= 2;
                need25 = n-2;
                ans+=need25/2;
                if(need25%2){
                    ans++;
                }
            } else{ //need18 == 1
                ans++;
                need25 = n-1;
                ans+=need25/2;
                if(need25%2){
                    ans++;
                }
            }
        } else{
            need25 = n;
            ans+=need25/2;
            if(need25%2){
                ans++;
            }
        }
    }else{
        need18 = n - n/2;
        ans += need18/3;
        if(need18%3){
            if(need18%3 == 2){
                ans+=2;
                need25 = n - 2;
                ans+=need25/2;
                if(need25%2){
                    ans++;
                }
            }else{
                ans++;
                need25 = n - 1;
                ans+=need25/2;
                if(need25%2){
                    ans++;
                }
            }
        } else{
            need25 = n;
            ans += need25/2;
            if(need25%2){
                ans++;
            }
        }
    }
    cout << ans;
}