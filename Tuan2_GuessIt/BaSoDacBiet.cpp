#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++)
		if(n%i==0)
			return 0;
	return true;
}

bool isPerfectNumber(int n) {
	int tmp = n;
	for(int i = 1; i <= n/2; i++) 
		if(n%i==0)
			tmp-=i;
	return (tmp == 0);
}

bool isNumberOfPoles(int n) {
	return (int)sqrt(n) == (double)sqrt(n);
}


int main() {
	int n;
	cin >> n;
	vector<int> prime;
	vector<int> perfectNumber;
	vector<int> numberOfPoles;

	for(int i = 2; i<=n; i++) {
		if(isPrime(i))
			prime.push_back(i);
		else if(isNumberOfPoles(i))
			numberOfPoles.push_back(i);
		if(isPerfectNumber(i)) 
			perfectNumber.push_back(i);

	}

	for(int i = 0; i < prime.size(); i++)
		cout << prime.at(i) << " ";
	cout << endl;
	for(int i = 0; i < perfectNumber.size(); i++)
		cout << perfectNumber.at(i) << " ";
	cout << endl;
	for(int i = 0; i < numberOfPoles.size(); i++)
		cout << numberOfPoles.at(i) << " ";
	return 0;
}