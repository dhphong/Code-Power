#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	cout << boolalpha << (a%7==0 && b%7==0);
	return 0;
}