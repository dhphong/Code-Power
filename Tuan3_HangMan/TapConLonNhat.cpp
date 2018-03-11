#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> numbers) {
	sort(numbers.begin(), numbers.end());
	int cnt=count(numbers.begin(), numbers.end(), numbers[0]);
	int max = 1;
	int i = 0;
	do {	
		i+=cnt;
		if(numbers[i]==numbers[i-1] + 1) {
			if(max<cnt + count(numbers.begin(), numbers.end(), numbers[i]))
				max = cnt + count(numbers.begin(), numbers.end(), numbers[i]);
		}
		else {
			if(max < cnt)
				max = cnt;
		}
		if(i<numbers.size()) cnt = count(numbers.begin(), numbers.end(), numbers[i]);
	} while(i<numbers.size());
	return max;
}
	
int main() {

	int n;
	cin >> n;

	vector<int> numbers(n);
	for(int& x: numbers)
		cin >> x;
	cout << solve(numbers);
	return 0;
}