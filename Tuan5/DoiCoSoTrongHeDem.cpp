#include <iostream>
#include <bitset>
#include <algorithm>

int main() {
    long long x;
    std::cin >> x;
    x = (x < 0 ? -x : x);
    std::string binary = std::bitset<50>(x).to_string();
    std::cout << binary.substr(binary.find_first_not_of('0'));
    return 0;
}

