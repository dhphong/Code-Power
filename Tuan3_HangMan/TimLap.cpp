#include <iostream>
#include <vector>

using namespace std;

bool solve(int n) {
	vector<bool> seen(n, 0);
	while(n--) {
		int tmp;
		cin >> tmp;
		if(seen[tmp - 1])
			return true;
		else 
			seen[tmp - 1] = true;
	}

	return false;
}
int main() {
	int n;
	cin >> n;
    cout << (solve(n) ? "Yes" : "No");
	return 0;
}