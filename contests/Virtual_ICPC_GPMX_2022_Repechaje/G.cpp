#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> M = {{1, 0}, {0, 1}};  
    vector<ll> v = {0, 0};
    string op;
    while(q--) {
        cin >> op;
        if (op == "r") {
            string axis;
            cin >> axis;
            vector<vector<ll>> M_new(2, vector<ll>(2));
            vector<ll> v_new(2);
            if (axis == "a") {
                M_new = {{0, 1}, {1, 0}};
                v_new = {0, 0};
            } else if (axis == "b") {
                M_new = {{-1, 0}, {0, 1}};
                v_new = {n-1, 0};
            } else if (axis == "c") {
                M_new = {{0, -1}, {-1, 0}};
                v_new = {n-1, n-1};
            } else if (axis == "d") {
                M_new = {{1, 0}, {0, -1}};
                v_new = {0, n-1};
            }
            ll new_v0 = M_new[0][0] * v[0] + M_new[0][1] * v[1] + v_new[0];
            ll new_v1 = M_new[1][0] * v[0] + M_new[1][1] * v[1] + v_new[1];
            vector<vector<ll>> new_M(2, vector<ll>(2));
            new_M[0][0] = M_new[0][0] * M[0][0] + M_new[0][1] * M[1][0];
            new_M[0][1] = M_new[0][0] * M[0][1] + M_new[0][1] * M[1][1];
            new_M[1][0] = M_new[1][0] * M[0][0] + M_new[1][1] * M[1][0];
            new_M[1][1] = M_new[1][0] * M[0][1] + M_new[1][1] * M[1][1];
            M = new_M;
            v[0] = new_v0;
            v[1] = new_v1;
        } else if (op == "q") {
            ll x, y;
            cin >> x >> y;
            x--; y--;
            ll final_x = M[0][0] * x + M[0][1] * y + v[0];
            ll final_y = M[1][0] * x + M[1][1] * y + v[1];
            ll id = final_x * n + final_y + 1;
            cout << id << endl;
        }
    }
    return 0;
}