#include <iostream>

using namespace std;

int main(){
	int sum=0;
	for(int i = 0; i < 5; ++i)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
	}

	cout.precision(2);
	cout << fixed << sum/5.0; 
	return 0;
}