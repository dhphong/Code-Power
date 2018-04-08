#include <iostream>
#include <vector>

typedef std::vector<std::vector<int> > vi;

vi generateBasicMatrix();
vi basicMatrix = generateBasicMatrix();
std::vector<int> createLine(std::vector<int>, int);

vi findMatrix(int n) {
    if (n == 1) {
        return basicMatrix;
    }
    
    vi ret;
    vi prevMatrix = findMatrix(n - 1); // Get (k-1)-th matrix
    
    // find basicMatrix x (k-1)th matrix
    for (int i = 0; i < prevMatrix.size(); ++i) {
        ret.push_back(createLine(prevMatrix[i], 1));
    }

    for (int i = 0; i < prevMatrix.size(); ++i) {
        ret.push_back(createLine(prevMatrix[i], -1));
    }
    
    return ret;
}

vi generateBasicMatrix() {
    vi a(1, std::vector<int>(2, 1));
    a.push_back(std::vector<int>());
    a[1].push_back(1);
    a[1].push_back(-1);
    return a;
}

std::vector<int> createLine(std::vector<int> line, int x) {
    int len = line.size();
    for (int i = 0; i < len; i++)
        line.push_back(line[i] * x);
    return line;
}
    
int main() {
    int n;
    std::cin >> n;
    
    vi ret = findMatrix(n);
    
    for (int i = 0; i < ret.size(); i++) {
        for (int j = 0; j < ret[i].size(); j++) 
            std::cout << (ret[i][j] == 1 ? "." : "o");
        std::cout << std::endl;
    }
    
    return 0;
}

