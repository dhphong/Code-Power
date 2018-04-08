#include <iostream>
#include <algorithm>


typedef long long l;

l findFractorial(l value, int begin, int end) {
    while (begin <= end) {
        value *= 1LL * begin;
        begin++;
    }
    return value;
}

l solve(int n, int k) {
    int _k = n - k;
    if (k < _k)
        std::swap(k, _k);

    l a = findFractorial(1, 1, _k);
    l b = findFractorial(a, _k + 1, k);
    l c = findFractorial(b, k + 1, n);

    return c / (a * b);
}

int main() {
    int n, k;
    std::cin >> n >> k;
    while (n != -1 && k != -1) {
        std::cout << solve(n, k) << std::endl;
        std::cin >> n >> k;
    }
    return 0;
}
