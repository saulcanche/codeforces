#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<char> letters;
    string s;
    cin >> s;
    for(char c : s) letters.insert(c);
    bool isB = true;
    if(letters.size() % 2 == 0) isB = false;
    cout << (isB? "IGNORE HIM!" : "CHAT WITH HER!");
}