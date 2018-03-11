#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	cout << fixed << setprecision(2) << sqrt(a*a + b*b);
	return 0;
}