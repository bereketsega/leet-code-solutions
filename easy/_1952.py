def isThree(n):
    """
    :type n: int
    :rtype: bool
    """
    sum = 1
    for i in range(1,n):
        if n % i == 0:
            sum+=1
    return True if sum == 3 else False

n = 4

print(isThree(n))

"""
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

An integer m is a divisor of n if there exists an integer k such that n = k * m.
"""
