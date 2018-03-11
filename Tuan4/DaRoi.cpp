#include <iostream>
#include <vector>

using namespace std;


bool check(int x, int y, const vector< vector<char> >& maps, int prev_x_position = -1, int prev_y_position = -1) {
    if (x == maps.size() - 1)
        return true;
    if (y > 0 && x != prev_x_position && y - 1 != prev_y_position && maps[x][y - 1] == 'E') {
        if (check(x, y - 1, maps, x, y))
            return true;
    }
    if (y < maps[0].size() - 1 && x != prev_x_position && y + 1 != prev_y_position && maps[x][y + 1] == 'E') {
        if (check(x, y + 1, maps, x, y))
            return true;
    }
    if (maps[x + 1][y] == 'E') {
        if (check(x + 1, y, maps, x, y))
            return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector< vector<char> > maps(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for(char& x : maps[i])
            cin >> x;
    }
    int x_position, y_position;

    for(int i = 0; i < n; i++) {
        if (maps[0][i] == 'Y') {
            x_position = 0;
            y_position = i;
            break;
        }
    }

    cout << (check(x_position, y_position, maps) ? "YES" : "NO");
    return 0;
}
