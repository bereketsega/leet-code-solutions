def selfDividingNumbers(left, right):
    """
    :type left: int
    :type right: int
    :rtype: List[int]
    """
    res = []
    for i in range(left, right+1):
        
        divisible = True
        orig = i

        while (i > 0):
            digit = i % 10
            if digit == 0:
                divisible = False
            else:
                if (orig % digit != 0):
                    divisible = False
            i //= 10
        if divisible:
            res.append(orig)
    return res

left = 1; right = 22
print(selfDividingNumbers(left, right))

'''
A self-dividing number is a number that is divisible by every digit it contains.

    For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

'''
