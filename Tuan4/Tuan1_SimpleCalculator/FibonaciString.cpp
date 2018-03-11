#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first = "a";
	string second = "b";
	cout << "f(0) = " << first << endl << "f(1) = " << second << endl;
	for(int i=2; i<=10; i++) {
		string tmp = second;
		second += first;
		first = tmp;
		cout << "f(" << i << ") = " << second << endl;
	}
	
	return 0;
}