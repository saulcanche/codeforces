#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        ll inicio = 0, fin = 0;
        ll frecMax = 0;

        while (inicio < n) {
            ll sumMax = a[inicio] + n;
            ll frecActual = 0;

            for (ll i = inicio; i < n; i++) {
                if (sumMax - a[i] < n && sumMax - a[i] > 0) {
                    frecActual++;
                    while (i + 1 < n && a[i] == a[i + 1]) {
                        i++;
                    }
                } else {
                    frecMax = max(frecMax, frecActual);
                    frecActual = 1;
                    sumMax = a[i] + n;
                }
            }

            frecMax = max(frecMax, frecActual);

            inicio = fin + 1;
            fin = inicio;
        }

        cout << frecMax << endl;
    }
    return 0;
}
