from typing import List


def containsDuplicate(nums: List[int]) -> bool:
    valKey = {}
    for i in nums:
        if i in valKey:
            # duplicate key
            return True
        else:
            # add key
            valKey[i] = i

    
print(containsDuplicate([2,4,1,3,1]))

# Given an integer array nums, 
# return true if any value appears at least twice in the array, 
# and return false if every element is distinct.
