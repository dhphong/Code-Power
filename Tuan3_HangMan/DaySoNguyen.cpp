#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	int maxArr = INT_MIN;
	int minArr = INT_MAX;
	int sum = 0;
	int cnt = 0;
	while(n--) {
		int tmp;
		cin >> tmp;
		maxArr = max(maxArr, tmp);
		minArr = min(minArr, tmp);
		if(tmp%2)
			cnt++;
		else 
			sum += tmp;
	}

	cout << maxArr << "\n" << minArr << "\n" << sum << "\n" << cnt;
	return 0;
}