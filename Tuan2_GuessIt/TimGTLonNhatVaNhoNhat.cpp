#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	double max, min, tmp;
	cin >> tmp;
	max=min=tmp;
	for(int i = 1; i<n; ++i)
	{
		cin >> tmp;
		if(tmp>max)
			max=tmp;
		if(tmp<min)
			min=tmp;
	}
	cout << max << "\n" << min;
	return 0;
}