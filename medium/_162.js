const findPeakElement = (nums) => {
  // finding the max element and storing its index
  // set the first value & index as max
  let maxElement = [nums[0], 0];

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] > maxElement[0]) {
      maxElement[0] = nums[i]; // replace value
      maxElement[1] = i; // replace index
    }
  }

  return maxElement[1];
};

// Test
const nums = [1, 2, 1, 3, 5, 6, 4];

console.log(findPeakElement(nums));

/*
A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. 
If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.
*/
