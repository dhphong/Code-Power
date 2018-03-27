#include <iostream>
#include <algorithm>
#include <vector>

void fill(std::vector<int>& a, int x) {
    for (int i = x * x; i < a.size(); i += x) {
        a[i] = 0;
    }
}

std::vector<int> findPrimes(const int& n) {
    std::vector<int> primes(n+1, 1);
    std::vector<int> ret;
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            fill(primes, i);
            ret.push_back(i);
        }
    }

    return ret;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> primes = findPrimes(n);

    for (int x : primes)
        std::cout << x << std::endl;

    return 0;
}
