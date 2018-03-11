#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	double _a, _b, _c;
	cin >> a >> b >> c >> _a >> _b >> _c;
	double d = a*_b - _a*b;
	double dx = c*_b - _c*b;
	double dy = a*_c - _a*c;
	cout.precision(2);
	if(d!=0) {
		cout << "x = " << dx/d << ", y = " << dy/d;
	}
	else if(d==0) {
		if(dx!=0 || dy!=0)
			cout << "Vo nghiem";
		else cout << "Vo so nghiem";
	}
	return 0;
}