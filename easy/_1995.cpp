#include <iostream>
#include <vector>

using namespace std;

int countQuadruplets(vector<int>& nums) {
    int count = 0;
    int sum; 
    for (int i = 0; i < nums.size()-3; i++) {
        for (int j = i+1; j < nums.size()-2; j++) {
            for (int k = j+1; k < nums.size()-1; k++) {
                sum = nums[i]+nums[j]+nums[k];
                for (int m = k+1; m < nums.size(); m++) {
                    if (sum == nums[m]) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {2,4,1,7};
    cout<< countQuadruplets(nums)<<endl;
    return 0;
}

// Given a 0-indexed integer array nums, return the number of distinct quadruplets (a, b, c, d) such that:

//     nums[a] + nums[b] + nums[c] == nums[d], and
//     a < b < c < d
