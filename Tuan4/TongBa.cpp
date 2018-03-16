#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <tuple>

using namespace std;

typedef long long LL;

void findTriplets(vector<LL> arr)
{
 	int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i=0; i<n-2 && arr[i] <= 0; i++)
    {
    	if (i > 0 && arr[i] == arr[i - 1])
    		continue;

        int l = i + 1;
        int r = n - 1;
        LL x = arr[i];
        set<tuple<LL, LL>> printed;
        while (l < r)
        {
        	if (l > i + 1 && arr[l] == arr[l - 1]) {
                l++;
                continue;
            }
            if (r < n - 1 && arr[r] == arr[r] + 1) {
                r--;
                continue;
            }
            if (x + arr[l] + arr[r] == 0)
            {
            	if (printed.find(tuple<LL, LL>(arr[l], arr[r])) == printed.end()){
	                cout << x << " " <<  arr[l] << " " << arr[r] << endl;
	                printed.insert(tuple<LL, LL>(arr[l], arr[r]));
                }
                l++;
                r--;
            } else if (x + arr[l] + arr[r] < 0)
                l++;

            else
                r--;
        }
    }
}


int main() {
    int n;
    cin >> n;
    vector<LL> nums(n);
    for (LL &x : nums)
        cin >> x;
    findTriplets(nums);
    return 0;
}