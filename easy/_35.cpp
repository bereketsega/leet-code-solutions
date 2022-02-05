#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {

    // trivial
    if(target < nums[0])
        return 0;
    if(target > nums[nums.size() - 1])
        return nums.size();

    // starting and ending pointers 
    int start = 0, end = nums.size() - 1;

    // loop until start and end meet
    while(start <= end){
        // middle index pointer
        int mid = start + ((end - start) / 2);
        // check if target is in right subarray
        if(target > nums[mid]){
            start = mid + 1;
        }
        // check if target is in left subarray
        else if(target < nums[mid]){
            end = mid - 1;
        }
        // found at index mid
        else{
            return mid;
        }
    }

    return start;
}

// Test
int main() {

    // use g++ -std=c++11 _35.cpp to compile
    
    vector<int> nums = {1,3,5,6};
    int target = 2;

    cout << searchInsert(nums, target) << endl;

    return 0;
}

/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/
