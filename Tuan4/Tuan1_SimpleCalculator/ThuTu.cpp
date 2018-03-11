#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	cout << boolalpha << ((a>b && b>c) || (a<b && b<c));
	return 0;
}