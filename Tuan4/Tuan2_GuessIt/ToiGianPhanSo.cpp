#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int numerator, denominator;
	cin >> numerator >> denominator;
	if(numerator == 0) {
		cout << 0;
		return 0;
	}

	int gcd = __gcd(abs(numerator), abs(denominator));
	int _numerator = numerator/gcd;
	int _denominator = denominator/gcd;
	if(_denominator==1)
		cout << _numerator;
	else if(_denominator==-1)
		cout << _numerator*-1;
	else if(_denominator<0) 
		cout << _numerator*-1 << "/" << _denominator*-1;
	else
		cout << _numerator << "/" << _denominator;
	return 0;
}