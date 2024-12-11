#include <iostream>
#include <utility>
#include <vector>
#define POINTS_TO_SOLUTION 4
using namespace std;

typedef long long ll;
int main(){
    pair<ll, ll> s, t, p;
    vector<pair<ll, ll>> path(POINTS_TO_SOLUTION);
    cin >> s.first >> s.second;
    cin >> t.first >> t.second;
    cin >> p.first >> p.second;

    ll maxC = 1e5;
    ll minC = -1e5;
   //casos donde puedo ir en linea recta de s a t
    if(s == t) {
        cout << 0;
        return 0;
    }
    /* if(p.second < t.second && p.second < s.second && p.first < t.first && p.first < s.first) {
        cout << 0; 
        return 0;
    }
    if(p.second > t.second && p.second > s.second && p.first > t.first && p.first > s.first) {
        cout << 0;
        return 0;
    }
    */
   
    // primer paso, alejarse a la esquina contraria a p
    if(s.second >= p.second){
        path[0].second = maxC;
    } else{
        path[0].second = minC;
    }
    if(s.first >= p.first){
        path[0].first = maxC;
    } else{
        path[0].first = minC;
    }

    if(path[0].first < t.first){
        path[1].first = maxC;
        path[1].second = path[0].second;
    } else{
        path[1].first = minC;
        path[1].second = path[0].second;
    }

    if(path[1].second < t.first){
        path[2].second = maxC;
        path[2].first = path[1].first;
    } else{
        path[2].second = minC;
        path[2].first = path[1].first;
    }
    path[3].first = t.first;
    path[3].second = path[2].second;

    for(auto p : path){
        cout << p.first << " " << p.second << endl;
    }
}