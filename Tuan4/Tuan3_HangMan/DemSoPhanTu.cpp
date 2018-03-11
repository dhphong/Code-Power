#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(10, 0);
	while(n--) {
		int tmp;
		cin >> tmp;
		v[tmp]++;
	}
	for(int i = 0; i < 10; ++i) 
		cout << i << " : " << v[i] << endl;
	return 0;
}