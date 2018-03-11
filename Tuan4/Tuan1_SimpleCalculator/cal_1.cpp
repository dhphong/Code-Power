#include <iostream>
#include <cstdlib>
using namespace std;

int arithmetic(int num1, int num2, char op) {
	switch(op) {
		case '+': 
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			return num1 / num2;
		// default:
		// 	cout << "Invalid Operator";
		// 	exit(1);
	}
}

int main() {
	int n1, n2;
	char op;
	cin >> n1 >> op >> n2;
	cout << arithmetic(n1, n2, op);

	return 0;
}

