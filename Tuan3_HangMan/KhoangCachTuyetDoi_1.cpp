// O(n^2)
// c++11

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int& x: a) cin >> x;
	int min = abs(a[1] - a[0]);  
	for(int i = 0; i < n - 1; i++)
		for(int j = i+1; j < n; j++)
			if(abs(a[i]-a[j]) < min)
				min = abs(a[i]-a[j]);
	cout << min;
	return 0;
}