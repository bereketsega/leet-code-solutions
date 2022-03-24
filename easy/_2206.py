def divideArray(nums):
    """
    :type nums: List[int]
    :rtype: bool
    """
    numFreqCount = {}
    for i in range(len(nums)):
        if nums[i] in numFreqCount:
            numFreqCount[nums[i]] += 1
        else:
            numFreqCount[nums[i]] = 1

    for key in numFreqCount:
        if numFreqCount[key] % 2 == 1:
            return False

    return True

nums = [3,2,3,2,2,2]

print(divideArray(nums))

'''
You are given an integer array nums consisting of 2 * n integers.

You need to divide nums into n pairs such that:

    Each element belongs to exactly one pair.
    The elements present in a pair are equal.

Return true if nums can be divided into n pairs, otherwise return false.
'''
