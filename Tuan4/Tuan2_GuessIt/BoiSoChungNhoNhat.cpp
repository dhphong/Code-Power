#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	a = abs(a); b=abs(b);
	if(a==0 || b==0) cout << 0;
	else cout << a*b/__gcd(a,b);
	return 0;
}