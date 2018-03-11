#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int& x : numbers)
        cin >> x;

    sort(numbers.begin(), numbers.end());
    int first = 0;
    while (numbers.at(first) <= 0) {
        int cnt = count(numbers.begin() + first + 1, numbers.end(), -numbers.at(first));
        for (int i = 0; i < cnt; ++i) {
            cout << numbers.at(first) << " " << -numbers.at(first) << endl;
        }
        first++;
    }
    return 0;
}
