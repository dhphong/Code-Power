#include <iostream>
#include <string>

using namespace std;

int solve(const int& n) {
	string num = to_string(n);
	int count = 0;
	for(char c:num)
		if(c!='0' && n%(c-'0')==0)
			count++;
	return count;	
}

int main() {
	int n;
	cin >> n;
	while(n--){
		int inp;
		cin >> inp;
		cout << solve(inp) << endl;
	}
 	return 0;
}