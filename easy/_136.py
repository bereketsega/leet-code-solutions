from typing import List


def singleNumber(nums: List[int]) -> int:
    """
    :type nums: List[int]
    :rtype: int
    """
    numCount = {} 
    for i in range(len(nums)):
        if nums[i] in numCount:
            numCount[nums[i]]+=1
        else:
            numCount[nums[i]]=1
    for key in numCount:
        if numCount[key] == 1:
            return key
    return None


nums = [4,1,2,1,2]

print(singleNumber(nums))

'''
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

'''
