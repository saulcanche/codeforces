#include<bits/stdc++.h>
#define  S second
#define  F first
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll vector<vll>
#define sll set<ll>
#define sz(x) (x).size()
#define vstring vector<string>
#define rep(x, g, y) for(ll x=g;x<y;x++)
#define rrep(x, g, y) for(ll x=g;x>=y;x--)
#define yes cout << "yes\n"
#define no cout << "no\n"
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef long double ld;


vll nums;

void solve() {
    rep(i, 0, (1LL << 16)){

        ll aux = i;
        string h, r;
        while(aux){
            h += (aux%2)+'0';
            aux /= 2;
        }

        r = h;
        reverse(all(r));
        string q[3];
        q[0] = r + h;
        q[1] = r + '1' + h;
        q[2] = r + '0' + h;

        rep(i, 0, 3){
            ll acc = 0;
            ll bin = 1;
            for(auto c: q[i]){
                if(c == '1') acc += bin;
                bin *= 2;
            }
            if(acc % 2) nums.push_back(acc);
            
        }
    }

    sort(all(nums));
    ll n;
    cin >> n;
    
    rep(i, 0, n){
        ll a, b;
        cin >> a >> b;
        cout << distance(lower_bound(all(nums), a), upper_bound(all(nums), b)) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*     ll t; cin >> t;
    while(t--) */
    solve();
}