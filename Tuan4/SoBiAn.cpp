#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n+1);
    for (int& x: a)
        cin >> x;
    for (int& x: b)
        cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    while (cnt < n && a.at(cnt) == b.at(cnt)) {
        cnt++;
    }
    cout << b.at(cnt);
    return  0;
}