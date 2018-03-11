#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if(a + b <= c || b + c <= a || a + c <= b)
		cout << "Invalid";
	else {
		cout << a+b+c << endl;
		if(a==b || b==c || a==c) {
			if(a==b && b==c)
				cout << "deu";
			else
				cout << "can";
		 } else if(a*a + b*b == c*c || b*b+c*c==a*a || a*a+c*c==b*b)
		 	cout << "vuong";
		 	else
		 		cout <<"thuong";

	}

	return 0;
}