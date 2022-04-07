#include <iostream>
#include <vector>

using namespace std;

int numOfPairs(vector<string>& nums, string target) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (i != j) {
                if  (nums[i]+nums[j] == target) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<string> nums = {"777","7","77","77"};
    string target = "7777";

    int res = numOfPairs(nums, target);

    cout << res << endl;

    return -1;
}

/*
Given an array of digit strings nums and a digit string target, 
return the number of pairs of indices (i, j) (where i != j) such that the concatenation of nums[i] + nums[j] equals target.
*/
