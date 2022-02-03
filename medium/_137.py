
def singleNumber(nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    count = {} # to store key: element in the array, value: repetition

    # fill the dictionary
    for i in range(len(nums)):
        if nums[i] in count:
            count[nums[i]]+=1
        else:
            count[nums[i]] = 1

    # returning the key with 1 value
    for key in count.keys():
        if count[key] == 1:
            return key

nums = [2,2,3,2]

print(singleNumber(nums))

'''
Given an integer array nums where every element appears three times except for one, which appears exactly once. 
Find the single element and return it.
'''
