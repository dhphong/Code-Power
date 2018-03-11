#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fillNums(int x, vector<int> &nums, const int &max_a, const int &min_b) {
    for (int i = x * (min_b / x); i >= max_a; i -= x)
        nums.at(i)++;
}

bool check(int x, const vector<int> &b) {
    for (int _ : b) {
        if (_ % x != 0)
            return false;
    }

    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    int max_a = *max_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
    vector<int> nums(min_b + 1, 0);
    for (int x : a) {
        fillNums(x, nums, max_a, min_b);
    }

    int cnt = 0;
    for (int i = max_a; i <= min_b; ++i) {
        if (nums.at(i) < m)
            continue;
        else 
            cnt += check(i, b);
    
    }

    cout << cnt;
    return 0;
}