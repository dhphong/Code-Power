#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> nums(5);
	for(int &x:nums) cin >> x;
	sort(nums.begin(), nums.end());
	cout << nums[2];
	return 0;
}