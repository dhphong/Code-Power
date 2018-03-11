#include <iostream>

using namespace std;

int main() {
	double score;	
	int count = 0;
	double sum = 0;
	do {
		do {
			cin >> score;
		} while(score > 10);
		if(score >= 0) {
			sum += score;
			count++;
		}
	} while (score >= 0);
	cout.precision(2);
	cout << fixed << sum/count;
	return 0;
}