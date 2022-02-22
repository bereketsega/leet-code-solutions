def findGCD(nums):
    #initialize min and max with the first element
    max = min = nums[0]
    for i in range(1,len(nums)):
        # find max
        if nums[i] > max:
            max = nums[i]
        # find min
        if nums[i] < min:
            min = nums[i]
    gdc = 1
    for i in range(1, max+1):
        # check common divisor
        if max % i == 0 and min % i == 0:
            # update common divisor with latest i
            gdc = i
    return gdc

nums = [2,5,6,9,10]

print(findGCD(nums))

'''
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
'''
