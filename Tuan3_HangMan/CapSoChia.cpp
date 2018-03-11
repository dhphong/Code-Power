#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	vector<int> numbers(n);
	for(int& x:numbers) cin >> x;
	for(int i=0; i<n-1; ++i)
		for(int j=i+1; j<n; ++j)
			if((numbers[i] + numbers[j])%k==0)
				count++;
	cout << count;
	return 0;
}