#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a,b,c;
	cin >> a >> b >> c;
	double delta = b*b - 4*a*c;
	cout.precision(2);
	if(delta==0) 
		cout << fixed << -b/(2*a);
	else if(delta > 0) {
		cout << fixed << (-b-sqrt(delta))/(2*a) << endl << (-b+sqrt(delta))/(2*a);
	}
	else if(delta < 0) {
		cout << fixed << -b/(2*a) << " " << -sqrt(abs(delta))/(2*a) << endl;
		cout << fixed << -b/(2*a) << " " << sqrt(abs(delta))/(2*a) << endl;
	}

	return 0;
}