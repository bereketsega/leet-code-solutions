#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    // to store the two elements that appear only once 
    vector<int> res; 

    // <number, appearance count in nums>
    unordered_map<int, int> numCount;

    // count appearance of each number
    for (int e : nums) {
        // key not found
        if (numCount.find(e) == numCount.end()) {
            // add key
            numCount[e] = 1;
        }
        else {
            // increment value
            numCount[e]++;

        }
    }

    // check which numbers appeared once
    for (const auto &e : numCount) {
        if (e.second == 1) {
            res.push_back(e.first);
        }
    }

    return res;
}
int main() {

    vector<int> nums = {1,2,1,3,2,5};

    vector<int> res = singleNumber(nums);

    for (int e : res) {
    cout<<" "<<e<<" ";
    }
    cout<<endl;

    return -1;
}

/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
*/
