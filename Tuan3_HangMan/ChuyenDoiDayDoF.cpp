#include <iostream>

using namespace std;

void solve(const double& f) {
	double c = (f-32)*5/9;
	cout << fixed << f << " " << c << " " << c+273.15 << endl; 
}

int main() {
	double max, min, stepSize;
	cin >> min >> max >> stepSize;
	cout.precision(2);
	for(double i = min; i<=max; i+=stepSize) {
		solve(i);
	}
	return 0;
}