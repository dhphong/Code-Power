#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> nums, int a, int &beg, int &length) {
    int sum = 0;
    for(int x:nums) sum += x;
    if((double)sum/length >= a)
        return ;
    length--;
    sum-=nums.back();
    for(;length>=1; length--) {
        int _sum = sum;
        for(; beg+length-1<nums.size(); beg++) {
            if((double)_sum/length>=a)
                return ;
            else if(beg+length<nums.size()){
                _sum= _sum - nums[beg] + nums[beg + length];
            }
        }
        beg=0;
        sum-=nums[beg+length-1];
    }

}

int main(){
    int n, a;
    cin >> n >> a;
    vector< int > nums(n);
    for(int &x:nums) cin>>x;
    int beg = 0;
    int length = n;
    solve(nums, a, beg, length);
    cout << length << endl;
    cout << beg+1 << " " << beg + length;
    return 0;
}
