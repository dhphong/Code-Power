#include <iostream>

using namespace std;

bool isPalindome(string s) {
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] != s[s.length() - 1 - i])
			return false;
	}

	return true;
}

int main() {
	string s;
	cin >> s;
	cout << (isPalindome(s) ? "Yes" : "No");
	return 0;
}