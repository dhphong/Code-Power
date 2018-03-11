#include <iostream>

using namespace std;

int main() {
	int tmp;
	cin >> tmp;
	cout << tmp << " ";
	int prevNumber = tmp;
	while(tmp>=0) {
		cin >> tmp;
		if(tmp!=prevNumber) {
			cout << tmp << " "; 
			prevNumber = tmp;
		}
	}
	return 0;
}