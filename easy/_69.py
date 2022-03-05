def mySqrt(x):
    """
    :type x: int
    :rtype: int
    """

    if x == 0:
        return 0

    s = 1 # lowest possible value
    e = 46341 # highest possible value
    
    '''
    binary search until the value is 
    in the range of two consecutive integers
    '''
    while (e >= s):
        m = s + (e-s)/2 # middle value
        # square is in the range
        if m*m <= x and x < (m+1)*(m+1):
            return m
        # too high
        elif m*m > x:
            e = m-1
        # too low
        else:
            s = m+1
    # last case
    return 46340

x = 81

print(mySqrt(x))

'''
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
'''
