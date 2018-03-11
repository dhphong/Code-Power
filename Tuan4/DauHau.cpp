#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(const vector<int>& y, int _x, int _y) {
    if (y[_x] != -1 || find(y.begin(), y.end(), _y) != y.end()) {    
        return false;
    }
    for(int i = 1; i <= y.size() - 1; i++) {
        if (y[i] != -1 && abs(i - _x) == abs(y[i] - _y))
            return false;
    }

    return true;
}

int main() {
    int n, i;
    cin >> n;

    vector<int> y(n + 1, -1);
    for(i = 0; i < n; i++) {
        int _x, _y;
        cin >> _x >> _y;
        if (check(y, _x, _y)) {
            y[_x] = _y;
        } else {
            break;
        }
    }

    cout << (i != n ? "yes" : "no");
    return 0;
}