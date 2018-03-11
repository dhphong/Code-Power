#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b>c && a+c>b && b+c>a) {
		double nc = (a+b+c)/2.0;
		cout << fixed << setprecision(2) << sqrt(nc*(nc-a)*(nc-b)*(nc-c));
	}
	else 	
		cout << "invalid";

	return 0;
}