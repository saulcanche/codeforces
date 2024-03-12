/*==========================================================================
        PLANTILLA 
============================================================================*/
#include<bits/stdc++.h>
#define  S second
#define  F first
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll vector<vll>
#define sll set<ll>
#define vstring vector<string>
#define rep(x, g, y) for(int x=g;x<y;x++)
#define rrep(x, g, y) for(int x=g;x>=y;x--)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
/*==========================================================================
        COMPILACION SUPER SET Y MULTISET 
============================================================================*/
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
 
//SUPER SET
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
//SUPER MULTISET
typedef tree<long long, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
 
//USOS
// imprimer la cantidad de elementos escritamente menor a X
//  cout << aux.order_of_key(x)<<"\n";
 
// imprime el elemento k-esimo mas grande(comenzando desde 0)
// cout<<*X.find_by_order(K)<<endl; 
 
//TIP: lower y upper invertidos en multiset.
 
 
/*==========================================================================
        VARIBLES FUNCIONES
============================================================================*/
 
//apartado de exponeciacion binaria
ll mod=1e9+7;
/*==========================================================================
            EXPONENCIACION BINARIA 
============================================================================*/
 
ll expo(ll a, ll b)
{
    if(a==0) return b==0;
    ll ans=1;
    while (b)
    {
        if(b&1) ans=(ans*a)%mod;
        b>>=1LL;
        a=(a*a)%mod;
    }
    return ans;
    
}
 
/*==========================================================================
            KMP 
============================================================================*/
 
/*==========================================================================
            ACORTADORES
============================================================================*/
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
 
void yes() { cout<<"YES\n"; }
 
void no() { cout<<"NO\n"; }
 
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
/*==========================================================================
            POLLARD'S RHO 
============================================================================*/
ll gcd(ll a,ll b)
{
    return  a?gcd(b%a,a): b;
}
 
ll mulmod(ll a, ll b, ll m){
    ll r=a*b-(ll)((long double)a*b/m+.5)*m;
    return r<0?r+m:r;
}
 
ll expmod(ll b, ll e, ll m)
{
    if(!e) return 1;
    ll q=expmod(b,e/2,m); 
    q=mulmod(q,q,m);
    return e&1?mulmod(b,q,m):q;
}
 
bool is_prime_prob(ll n, ll a)
{
    if(n==a) return true;
    ll s=0, d=n-1;
    while(d%2==0) s++,d/=2;
    ll x=expmod(a,d,n);
    if((x==1)||(x+1==n)) return true;
    for(int tt=0; tt<s-1;++tt){
        x=mulmod(x,x,n);
        if(x==1) return false;
        if(x+1==n) return true;
    }
    return false;
}
 
/*==========================================================================
            CODIGO
============================================================================*/
 
void solve()
{
   
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t; cin >> t;
    while(t--)
      solve();
    
    return 0;
}