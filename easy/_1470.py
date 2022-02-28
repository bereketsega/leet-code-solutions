from typing import List

def shuffle(nums: List[int], n: int) -> List[int]:
    res = [0] * len(nums)

    for i in range(n):
        res[i*2] = nums[i]
    for i in range(1, n+1):
        res[(i*2)-1] = nums[n+i-1]

    return res

nums = [2,5,1,3,4,7]
n = 3

print(shuffle(nums, n))

'''
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
'''
