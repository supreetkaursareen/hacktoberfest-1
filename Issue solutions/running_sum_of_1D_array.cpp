// Github username : Swarup-2003
// Aim : want to complete my first hacktoberfest
// Date - 23rd October , 2022

// my code --

#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            ans[i] = ans[i-1] + nums[i];
        return ans;
    }
};

// solution of running sum of 1D array
// input : nums = [ 1 , 2 , 3 , 4 ]
// output : [ 1 , 3 , 6, 10 ]
// explanation : Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]
