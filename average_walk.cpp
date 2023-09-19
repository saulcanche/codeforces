#include <iostream>
using namespace std;
int main(){
    int X, steps, mins;
    cin >> X;
    while (steps < 3000 && mins <15)
    {
        mins++;
        steps += X;
    }
    cout << mins;
    
    
}