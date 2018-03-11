#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prev;
    prev.push_back(1);
    cout << 1 << endl;
    for(int i = 0; i < n; ++i) {
        vector<int> current;
        current.push_back(1);
        for(int j = 0; j < i; ++j) {
            current.push_back(prev[j] + prev[j+1]);
        }
        current.push_back(1);
        for(int& x: current)
            cout << x << " ";
        cout << endl;
        prev = current;
    }
    return 0;
}