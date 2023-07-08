from typing import List


def canJump(nums: List[int]) -> bool:
    if (len(nums) == 1):
        return True
    step = 0
    for i in range(len(nums)-1, 0, -1):
        if nums[i] >= step:
            step = 1
        else:
            step += 1
    return nums[0] >= step

print(canJump([2,3,1,1,4])) # True

'''
You are given an integer array nums. 
You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.
'''
