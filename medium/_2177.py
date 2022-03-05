def sumOfThree(num):
    """
    :type num: int
    :rtype: List[int]
    """
    res = [] # result list 
    third = num / 3
    # if divisible by 3: there exist consecutive integers
    if num % 3 == 0: 
        res.append(third-1)
        res.append(third)
        res.append(third+1)
    return res

num = 33

print(sumOfThree(num))

'''
Given an integer num, return three consecutive integers (as a sorted array) that sum to num. 
If num cannot be expressed as the sum of three consecutive integers, return an empty array.
'''
