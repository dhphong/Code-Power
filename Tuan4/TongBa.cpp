#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <tuple>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& x : nums)
        cin >> x;
    sort(nums.begin(), nums.end());
    set< tuple<int, int> > a;
    for (int i = 0; i < n-2 && nums[i] <= 0; ++i) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum = nums[i] + nums[j];
            if (find(nums.begin() + j + 1, nums.end(), -sum) != nums.end()) {
                if (find(a.begin(), a.end(), tuple<int, int>(nums[i], nums[j])) != a.end()) {
                    continue;
                } else {
                    cout << nums[i] << " " << nums[j] << " " << -sum << endl;
                    a.insert(tuple<int, int>(nums[i], nums[j]));
                }
            }
        }
    }
    return 0;
}