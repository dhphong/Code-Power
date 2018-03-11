#include <iostream>

using namespace std;

const char * const numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
								"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const char* const numbers10[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void print(int value) {
	if(value < 0) {
		cout << "negative ";
		print(-value); 
	} else if(value >= 1000000) {
		print(value/1000000);
		cout << " million";
		if(value%1000000) {
			cout << " ";
			print(value%1000000);
		}
	} else if (value >= 1000) {
		print(value/1000);
		cout << " thousand";
		if(value%1000) {
			cout << " ";
			print(value%1000);
		}
	} else if (value >= 100) {
		print(value/100);
		cout << " hundred";
		if(value%100) {
			cout << " ";
			print(value%100);
		}
	}
	else if(value >= 20) {
		cout << numbers10[value/10];
		if(value%10) {
			cout << "-";
			print(value%10);
		}
	} else cout << numbers[value];
}

int main() {
	int n;
	cin >> n;
	print(n);
	return 0;
}