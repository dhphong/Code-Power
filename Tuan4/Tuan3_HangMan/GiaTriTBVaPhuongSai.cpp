#include <iostream>
#include <vector>

using namespace std;

int main() {
    double sum = 0;
    int n = 0;
    vector<int> numbers;
    int tmp;
    while (cin >> tmp) {
        numbers.push_back(tmp);
        sum += tmp * 1.0;
        n++;
    }
    sum /= n;
    cout.precision(2);
    cout << fixed << sum << endl;
    double ret = 0;
    for(int i = 0; i < n; i++)
        ret += (numbers[i] - sum)*(numbers[i] - sum);
    cout << fixed <<ret / n;
    return 0;
}