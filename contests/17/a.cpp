#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000;
vector<bool> isPrime(MAX_N + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX_N; i++) if (isPrime[i]) for (int j = i * i; j <= MAX_N; j += i) isPrime[j] = false;
    for (int i = 2; i <= MAX_N; i++) if (isPrime[i]) primes.push_back(i);
}

bool hasAtLeastK(int n, int k) {
    int count = 0;
    for (size_t i = 0; i + 1 < primes.size(); i++) {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && isPrime[sum]) count++;
    return count >= k;
    }
}

int main() {
    sieve(); 
    int n, k;
    cin >> n >> k;
    cout << (hasAtLeastK(n, k) ? "NO" : "YES");
}
