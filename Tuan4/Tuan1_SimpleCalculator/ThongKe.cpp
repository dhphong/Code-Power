#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double average = 0;
	vector<int> nums(n);
	for(int &x:nums) {
		cin >> x;
		average += x;
	}
	cout << fixed << setprecision(2) << average/n << endl;
	cout << *max_element(nums.begin(), nums.end()) << endl;
	cout << *min_element(nums.begin(), nums.end()) << endl; 

	return 0;
}