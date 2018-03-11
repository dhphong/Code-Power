#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* id = new int[6];
	for(int i=0; i<6; i++)
		id[i]=0;
	while(n--) {
		int tmp;
		cin >> tmp;
		id[tmp]++;
	}
	
	int loc = max_element(id, id+6) - id;
	delete[] id;
	cout << loc;
	return 0;
}