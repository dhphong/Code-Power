// O(n*logn)
// c++11

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int solve(vector<int>& a, int begin, int end) {
	if (end - begin == 1)
		return INT_MAX;
	if (end - begin == 2)
		return abs(a[begin] - a[begin + 1]);
	int mid = (begin + end) / 2;
	int value = min(solve(a, begin, mid), solve(a, mid, end));
	return min(value, abs(a[mid] - a[mid - 1]));
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& x : a) cin >> x;
	sort(a.begin(), a.end());
	cout << solve(a, 0, n);
	cin.ignore();
	cin.get();
	return 0;