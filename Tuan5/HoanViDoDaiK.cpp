#include <iostream>
#include <string>

void solve(int n, int k, std::string string, std::string i);

int main() {
    int n, k;
    std::cin >> n >> k;
    std::string ret = "";
    solve(n, k, ret, "");
    return 0;
}

void solve(int n, int k, std::string string, std::string i) {
    if (k == 0) {
        std::cout << string << std::endl;
    } else {
        for (char c = 'a'; c < 'a' + n; c++) {
            if (i.find(c) != std::string::npos)
                continue;
            solve(n, k - 1, string + c, i + c);
        }
    }
}
