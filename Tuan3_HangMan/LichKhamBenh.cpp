#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> times(n);
    for(int& x: times)
        cin >> x;
    sort(times.begin(), times.end());
    long long sum = 0;
    for(int i = n-1; i >= 0; --i)
        sum += 1LL*times[n-i-1]*i;
    cout << sum;
    return 0;
}