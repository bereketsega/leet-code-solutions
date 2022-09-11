#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    
    for (int i = 0; i < nums.size(); i+=2) {
        if (nums.size()-1 == i || nums[i] != nums[i+1] ) {
            return nums[i];
        }
    }
    return 0;
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int res = singleNonDuplicate(nums);
    cout << res << endl;
}


/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.
*/
