
def twoSum(nums, target):

    res = []  # result list
    map = {}  # mapping

    # mapping each element
    for i in range(len(nums)):
        map[nums[i]] = i

    # checking existence      
    for i in range(len(nums)):

        diff = target - nums[i]
        
        # if key exists and not the same number
        if (diff in map and map[diff] != i):
            # add indices to result
            res.append(i)
            res.append(map[diff])
            break
      
    return res

# Test
nums = [2,7,11,15]
target = 9
print(twoSum( nums, target))

"""
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
"""
