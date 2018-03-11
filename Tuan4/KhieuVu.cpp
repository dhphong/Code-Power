#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(const vector<double>& man, const vector<double>& woman) {
    int sz = man.size();
    for (int i = 0; i < sz; i++) 
        if (man[i] < woman[i])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<double> man(n), woman(n);

    for (int i = 0; i < n; ++i) {
        cin >> man[i] >> woman[i];
    }

    sort(man.begin(), man.end());
    sort(woman.begin(), woman.end());

    cout << (check(man, woman) ? "Yes" : "No");

    return 0;
}