// O(n)
// c++11

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int& x: a) cin >> x;
	sort(a.begin(), a.end());
	int min = abs(a[1] - a[0]);  
	for(int j = 2; j < n; j++)
		if(abs(a[j]-a[j-1]) < min)
			min = abs(a[j]-a[j-1]);
	cout << min;
	return 0;
}