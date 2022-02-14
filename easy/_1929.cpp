#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(nums.size() * 2);
    for (int i = 0, j = nums.size(); i < nums.size() && j < ans.size(); i++, j++) {
        ans[i] = nums[i];
        ans[j] = nums[i];
    }
    return ans;
}
int main() {

    vector<int> nums = {1,3,2,1};

    vector<int> res = getConcatenation(nums);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.
*/
