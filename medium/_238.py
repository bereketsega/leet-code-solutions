from typing import List


def productExceptSelf(nums: List[int]) -> List[int]:
    left_prod = [1]*len(nums)
    right_prod = [1]*len(nums)

    # populate left products
    curr_prod = 1
    for i in range(len(nums)):
        left_prod[i] = curr_prod
        curr_prod *= nums[i]

    # populate right products
    curr_prod = 1 
    for i in range(len(nums)-1, -1, -1):
        right_prod[i] = curr_prod
        curr_prod *= nums[i]

    # populate products of left and right
    res = []
    for i in range(len(nums)):
        res.append(left_prod[i]*right_prod[i])
    
    return res


nums = [1,2,3,4]
print(productExceptSelf(nums)) # [24,12,8,6]

'''
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
'''
