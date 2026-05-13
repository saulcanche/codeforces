#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll pow10[20];
ll sumDigitsUpTo10Pow[20];
void precompute() {
  pow10[0] = 1;
  sumDigitsUpTo10Pow[0] = 0;
  for (int i = 1; i < 20; i++) {
    pow10[i] = pow10[i - 1] * 10;
    sumDigitsUpTo10Pow[i] = 45 * pow10[i - 1] + 10 * sumDigitsUpTo10Pow[i - 1];
  }
}
ll digitSum(ll n) {
  if (n < 10)
    return n * (n + 1) / 2;
  ll d = log10(n);
  ll p = pow10[d];
  ll digit = n / p;
  ll last = n % p;

  ll sum = digit * sumDigitsUpTo10Pow[d] + (digit * (digit - 1) / 2) * p +
           digit * (last + 1);
  sum += digitSum(last);
  return sum;
}
pair<ll, ll> findN(ll k) {
  ll d = 1, s = 1;
  while (true) {
    ll numbers = 9 * s;
    ll len = numbers * d;
    if (k <= len) {
      ll comp = (k - 1) / d;
      ll r = (k - 1) % d;
      return {s + comp, r};
    }
    k -= len;
    s *= 10;
    d++;
  }
}
void solve() {
  ll k;
  cin >> k;
  auto [num, r] = findN(k);
  ll sum = digitSum(num - 1);
  ll tmp = num;
  vector<int> digits;
  while (tmp) {
    digits.push_back(tmp % 10);
    tmp /= 10;
  }
  reverse(digits.begin(), digits.end());
  for (ll i = 0; i <= r; i++)
    sum += digits[i];
  cout << sum << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precompute();
  ll t;
  cin >> t;
  while (t--)
    solve();
}
