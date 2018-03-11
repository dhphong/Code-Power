#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    vector< vector<char> > maps(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for(char& x : maps[i])
            cin >> x;
    }
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < n; j++) {
            if (maps[i][j] == 'Y') {
                if (j > 0 && maps[i][j - 1] == 'E' && maps[i + 1][j - 1] == 'E') 
                    maps[i + 1][j - 1] = 'Y';
                if (maps[i + 1][j] == 'E')
                    maps[i + 1][j] = 'Y'; 
                if (j < n - 1 && maps[i][j + 1] == 'E' && maps[i + 1][j + 1] == 'E') 
                    maps[i + 1][j + 1] = 'Y';
            }
        }
    }
    cout << (find(maps[m - 1].begin(), maps[m - 1].end(), 'Y') != maps[m - 1].end() ? "YES" : "NO");
    return 0;
}