#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> Prefix(const vector<ll>& v) {
    int n = v.size();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i - 1];
        while (j > 0 && v[i] != v[j])
            j = pi[j - 1];
        if (v[i] == v[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
ll Match(const vector<ll> &text, const vector<ll> &pattern) {
    ll n = text.size(), m = pattern.size();
    vector<ll> prefix = Prefix(pattern);
    ll k = 0, count = 0;
    for (ll i = 0; i < n; ++i) {
        while (k > 0 && pattern[k] != text[i]) k = prefix[k - 1];
        if (pattern[k] == text[i]) k++;
        if (k == m) {
            count++;
            k = prefix[k - 1];
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll M, N;
    cin >> M >> N;
    if (M == 1) {
        cout << N << '\n';
        return 0;
    }
    vector<ll> a(M), b(N), distA(M - 1), distB(N - 1);
    for (ll i = 0; i < M; i++) {
        cin >> a[i];
        if (i > 0) distA[i - 1] = a[i] - a[i - 1];
    }
    for (ll i = 0; i < N; i++) {
        cin >> b[i];
        if (i > 0) distB[i - 1] = b[i] - b[i - 1];
    }
    cout << Match(distB, distA) << '\n';
    return 0;
}
