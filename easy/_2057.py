
def smallestEqual(nums):
    for i in range(len(nums)):
        if i % 10 == nums[i]:
            return i
    return -1 

nums = [4,3,2,1]

res = smallestEqual(nums)

print(res)

'''
Given a 0-indexed integer array nums, return the smallest index i of nums such that i mod 10 == nums[i], or -1 if such index does not exist.

x mod y denotes the remainder when x is divided by y.

'''
