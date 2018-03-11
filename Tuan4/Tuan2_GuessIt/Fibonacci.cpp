#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n==1) {
	    cout << "Thuoc day Fibonacci\n1 1";
	    return 0;
	}
	vector<int> fibo(2, 1);
	while(true)
	{
		int tmp = fibo.back() + fibo.at(fibo.size()-2);
		if(tmp == n)
		{
			cout << "Thuoc day Fibonacci" << endl;
			fibo.push_back(tmp);
			break;
		}
		if(tmp > n) {
			cout << "Khong thuoc day Fibonacci" << endl;
			break;
		}
		fibo.push_back(tmp);
	}

	for(int x:fibo) cout << x << " ";
	return 0;
}