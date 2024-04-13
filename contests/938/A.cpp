#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, a, b, aux;
    cin >> n >> a >> b;

    if ((a * 2) > b)
    {
        if (n % 2 == 0)
        {

            cout << (n / 2) * b << endl;
        }
        else
        {
            aux += (n / 2) * b;
            aux += (n % 2) * a;
            cout << aux << endl;
        }
    }
    else
    {
        cout << n * a << endl;
    }
}
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
