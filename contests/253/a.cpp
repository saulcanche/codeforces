#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string str;
    set<char> unique;
    getline(cin, str);
    for(auto c : str){
        if(c == '{' || c == '}' || c == ',' || c == ' ') continue;
        unique.insert(c);
    }
    cout << unique.size();
}
