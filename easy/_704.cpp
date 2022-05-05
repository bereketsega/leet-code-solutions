#include <iostream>
#include <vector>

int search(std::vector<int>& nums, int target) {
    int min = 0;
    int max = nums.size()-1;

    while (min <= max) {
        int mid = min + (max-min) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            max = mid-1;
        } else {
            min = mid+1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-1,0,3,5,9,12};
    int index = search(nums, 9);
    std::cout << index << std::endl;

    return -1;
}

/*
Given an array of integers nums which is sorted in ascending order, and an integer target, 
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/
