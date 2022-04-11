from typing import List


def intersection(nums1: List[int], nums2: List[int]) -> List[int]:
    res = []
    numCount = {}
    #first occurrence
    for num in nums1:
        if not num in numCount:
            numCount[num] = 1
    #second occurrence
    for num in nums2:
        if num in numCount:
            numCount[num] = 2
    #add witih two occurrence  
    for key in numCount:
        if numCount[key] == 2:
            res.append(key)
            
    return res

nums1 = [4,9,5]
nums2 = [9,4,9,8,4]

print(intersection(nums1, nums2))

'''
Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must be unique and you may return the result in any order.
'''
