from typing import List


def findLonely(nums: List[int]) -> List[int]:
    n = len(nums)
    lonely_nums = []
    #trivial
    if n == 1:
        lonely_nums.append(nums[0])
        return lonely_nums
    nums.sort()
    #check first and last numbers
    if nums[1] != nums[0] and nums[1] != nums[0]+1: lonely_nums.append(nums[0])
    if nums[n-1] != nums[n-2] and nums[n-2]+1 != nums[n-1]: lonely_nums.append(nums[n-1])
    for i in range(1, n-1):
        is_adjacent_lonely = nums[i-1] != nums[i]-1 and nums[i]+1 != nums[i+1]
        appear_once = nums[i-1] != nums[i] and nums[i] != nums[i+1]
        if is_adjacent_lonely and appear_once:
            lonely_nums.append(nums[i])
    return lonely_nums


nums = [1,3,5,3]

print(findLonely(nums))
'''
You are given an integer array nums. A number x is lonely when it appears only once, 
and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Return all lonely numbers in nums. You may return the answer in any order.
'''
