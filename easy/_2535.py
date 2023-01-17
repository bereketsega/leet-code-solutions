from typing import List


def differenceOfSum(nums: List[int]) -> int:

    def findDigitSum(nums: List[int]) -> int:
        total: int = 0
        for i in range(len(nums)):
            num = nums[i]
            while(num > 0):
                digit = num%10
                total+=digit
                num//=10
        return total

    return sum(nums) - findDigitSum(nums)


print(differenceOfSum([1,15,6,3]))

# You are given a positive integer array nums.

#     The element sum is the sum of all the elements in nums.
#     The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.

# Return the absolute difference between the element sum and digit sum of nums.

# Note that the absolute difference between two integers x and y is defined as |x - y|.
