#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (a.find(tmp) != a.end()) {
            a.at(tmp)++;
        } else {
            a.insert(pair<int, int>(tmp, 1));
        }
    }
    int max = 0;
    for (map<int, int>::iterator it = a.begin(); it != a.end(); ++it) {
        if (it->second > max)
            max = it->second;
    }
    cout << n - max;
    return 0;
}