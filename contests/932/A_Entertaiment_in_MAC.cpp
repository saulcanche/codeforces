#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll left = 0;
        ll right = s.length() -1;

        if (s[left] < s[right])
        {
            cout << s << endl;
        }
        else if (s[left] > s[right]){
            string original = s;
            reverse(s.begin(), s.end());
            s.append(original);
            cout << s<<endl;
        }else{ 
            while (s[left] == s[right] && right > left)
            {
                left++;
                right--;
                
            }
            if(s[left]>s[right]){
                    string original = s;
                    reverse(s.begin(), s.end());
                    s.append(original);
                    cout << s<<endl;
                } else{
                    cout << s<<endl;
                    }
                
        }
        
    }
}