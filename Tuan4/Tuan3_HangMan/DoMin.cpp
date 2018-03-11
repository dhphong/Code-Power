#include <iostream>
#include <vector>

using namespace std;

void solve(vector< vector<char> >& map) {
    int m = map.size() - 2;
    int n = map[0].size() - 2;
    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(map[i][j] == '*')
                continue;
            int cnt = 0;
            for(int x = -1; x <= 1; ++x) {
                for(int y = -1; y <= 1; ++y) {
                    cnt += (map[i + x][j + y] == '*');
                }
            }
            map[i][j] = cnt + '0';
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    vector< vector<char> > map(m + 2, vector<char>(n + 2, ' '));
    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j)
            cin >> map[i][j];
    }
    solve(map);
    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j)
            cout << map[i][j] << " ";
        cout << "\n";
    }
    return 0;
}