#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
string solve(int n, int k) {
    
    string ret(n/2, '(');
    ret += string(n/2,')');


    for(int i=1; i<k; i++) {
    	int pos = ret.find_last_of('(', n);
    	if(pos>=n-2){
    		
    	}
    }
    return ret;
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << solve(n, k);
    return 0;
}
