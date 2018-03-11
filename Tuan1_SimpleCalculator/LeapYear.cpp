#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;
	bool isLeapYear = ((year%100==0)?(year%400==0):(year%4==0));
	if(isLeapYear)
		cout << year << " is a leap year!";
	else
		cout << year << " is a common year!";
	return 0;
}