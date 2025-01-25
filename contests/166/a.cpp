#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string str_n;
    cin >> str_n;
    int ans = 0;
    for(int i = stoi(str_n) + 1; i < 90000; i++){
        string t = to_string(i);
        set<char> diff;
        for(char c: t) diff.insert(c);
        if(diff.size() == 4){
            ans = stoi(t);
            break;
        }
    }
    cout << ans;
}