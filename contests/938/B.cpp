#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> m(n * n);
    ll min = LLONG_MAX;
    bool can = true;

    for (ll i = 0; i < n * n; i++)
    {
        cin >> m[i];
        if (m[i] < min)
        {
            min = m[i];
        }
    }
    if (min == 1)
    {
        for (ll i = 0; i < n * n; i++)
        {
            if (m[i] == min)
            {
                continue;
            }
            if (m[i] % d == min || m[i] % c == min || m[i] % (c+d) == min)
            {
                continue;
            }
            else
            {
                can = false;
            }
        }
    }
    else if (min > 1)
    {

        for (ll i = 0; i < n * n; i++)
        {
            if (m[i] == min)
            {
                continue;
            }
            if (m[i] % min == c || m[i] % min == d || m[i] % min == (c + d))
            {
                continue;
            }
            else
            {
                can = false;
            }
        }
    }
    if (can == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
