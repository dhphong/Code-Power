#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector< vector<int> > nums;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        nums.push_back(vector<int>(m));
        for (int& x : nums.back())
            cin >> x;
    }

    for (int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;
        cout << nums[x][y] << endl;
    }
    return 0;
}