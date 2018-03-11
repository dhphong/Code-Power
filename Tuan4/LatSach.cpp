#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    // n -= n%2;
    n += n%2;
    cout << min((k + 1) / 2 , (n - k + 1)/2);
    return 0;
}