#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool primes[n + 1];
    for(int i = 0; i <= n; ++i) {
        primes[i] = true;
    }

    primes[0] = primes[1] = false;

    for(int i = 2; i <= n; ++i) {
        if (primes[i]) {
            cout << i << " ";
            for(int j = i * i; j <= n; j += i)
                primes[j] = false;
        }
    }
    return 0;
}