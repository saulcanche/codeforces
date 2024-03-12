#include<bits/stdc++.h>
#define  S second
#define  F first
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll vector<vll>
#define vchar vector<char>
#define vstring vector<string>
#define rep(x, g, y) for(ll x=g;x<y;x++)
#define rrep(x, g, y) for(ll x=g;x>=y;x--)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;

void solve()
{
    ll n; cin >> n;
    map<ll,ll> indi;
    map<ll,vll> saltos;
    vll a(n+1);
    rep(i,ll(1),ll(n+1))
    {
        ll x; cin >> x;
        a[i]=x;
        if(indi.find(x)!=indi.end())
        {
            if(indi[x]+1!=i)
            {
                saltos[x].push_baxck(indi[x]+1);
                indi[x]=i;
            }
            else indi[x]=i;
        }
        else indi[x]=i;
    }
    for (auto c: indi)
    {
        saltos[c.F].push_back(indi[c.F]+1);
    }
    ll q;
    while (q--)
    {
        ll l,r;
        cin >> l >> r;
        auto it =upper_bound(saltos[a[l]].begin(), saltos[a[l]].end(), l);
        if(it==saltos[a[l]].end() || *it>r) cout <<"-1 -1\n";
        else cout << a[l] <<" "<< a[*it]<<"\n";
    }
    
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
   
    while(t--)
        solve();
      
    return 0;
}