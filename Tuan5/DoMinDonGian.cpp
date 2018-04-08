#include <iostream>
#include <vector>

std::vector< std::vector<int> > initMap, map;


void gameOver();

void printCell(int x, int y);

int checker(int x, int y);

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;
    for (int i = 0; i < m; ++i) {
        initMap.emplace_back(std::vector<int>(n));
        for (int& j : initMap.back()) {
            char tmp;
            std::cin >> tmp;
            j = (tmp == 'M' ? 1 : 0);
        }
    }

    map = std::vector<std::vector<int>>(m, std::vector<int>(n, -1));
    int x, y;
    while (std::cin >> x >> y) {
        if (initMap.at(x).at(y) == 1) {
            gameOver();
            break;
        }
        else {
            printCell(x, y);
        }
    }

    return 0;
}

void printCell(int x, int y) {
    map.at(x).at(y) = checker(x, y);
    for (int i = 0; i < map.size(); ++i) {
        for (int j : map.at(i)) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

int checker(int x, int y) {
    int cnt = 0;
    for (int i = x - 1; i <= x + 1; i++) {
        if (i < 0 || i >= initMap.size())
            continue;
        for (int j = y - 1; j <= y + 1; j++) {
            if (j < 0 || j >= initMap.at(0).size())
                continue;
            cnt += initMap.at(i).at(j);
        }
    }
    return cnt;
}

void gameOver() {
    std::cout << "YOU'RE DEAD!\n";
    for (int i = 0; i < initMap.size(); ++i) {
        for (int j : initMap.at(i)) {
            std::cout << (j == 1 ? "M" : "E");
        }
        std::cout << std::endl;
    }
}
