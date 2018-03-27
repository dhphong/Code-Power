#include <iostream>
#include <algorithm>

int gcd(int a, int b){
    return (b == 0 ? a : gcd(b, a % b));
}

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a < b)
        std::swap(a, b);

    std::cout << (gcd(a, b) == 1 ? "YES" : "NO");

    return 0;
}
