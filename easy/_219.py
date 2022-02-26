def containsNearbyDuplicate(nums, k):
    """
    :type nums: List[int]
    :type k: int
    :rtype: bool
    """
    countIdx = {}

    for i in range(len(nums)):
        if not countIdx.get(nums[i]):
            # add key and index of key and 
            # false since pair has not been found
            countIdx[nums[i]] = [i, False]
        else:
             
            # compare and pair has been found
            if abs(countIdx[nums[i]][0] - i) <= k:
                countIdx[nums[i]][1] = True
            # update the latest pair index 
            countIdx[nums[i]][0] = i
  
    # find out if pairs exist
    for key in countIdx:
        if countIdx[key][1] == True:
            return True
    return False

nums = [1,0,1,1]
k = 1

print(containsNearbyDuplicate(nums, k))


'''
Given an integer array nums and an integer k, 
return true if there are two distinct indices i and j in the array 
such that nums[i] == nums[j] and abs(i - j) <= k.
'''
