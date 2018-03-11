#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int newX, newY;
	cin >> newX >> newY;
	int minX = newX, minY = newY;
	for(int i=1; i<n; ++i) {
		cin >> newX >> newY;
		if(newX < minX)
			minX = newX;
		if(newY < minY)
			minY = newY; 
	}

	cout << minX*minY;
	return 0;
}