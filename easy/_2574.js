

/**
 * Calculates the difference between the sum of the left and right part of the array
 * T/S: O(n)/O(1)
 *
 * @param {number[]} nums
 * @return {number[]}
 */
const leftRigthDifference = function(nums) {
    let totalSum = 0;
    for (let i = 0; i < nums.length; i++) totalSum+=nums[i];

    let leftSum = 0;
    for (let i = 0; i < nums.length; i++) {
        let current = nums[i]
        totalSum -= current;
        nums[i] = Math.abs(leftSum - totalSum);
        leftSum += current;
    }
    return nums;
};

console.log(leftRigthDifference([10,4,8,3])); //[15,1,11,22]


/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

    answer.length == nums.length.
    answer[i] = |leftSum[i] - rightSum[i]|.

Where:

    leftSum[i] is the sum of elements to the left of the index i in the array nums. 
    If there is no such element, leftSum[i] = 0.

    rightSum[i] is the sum of elements to the right of the index i in the array nums. 
    If there is no such element, rightSum[i] = 0.

Return the array answer.
*/
