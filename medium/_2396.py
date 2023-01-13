# Approach 1:
def isStrictlyPalindromic(n: int) -> bool: # T/S:O(n)/O(n)
    b = bin(n)[2:]          # binary representation
    r = list(reversed(b))   # reversed 
    return b == r
    

# Approach 2:
def isStrictlyPalindromic2(n: int) -> bool: # T/S:O(1)/O(1)
    return False
    
    
print(isStrictlyPalindromic(9))
print(isStrictlyPalindromic2(4))

# An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), 
# the string representation of the integer n in base b is palindromic.

# Given an integer n, return true if n is strictly palindromic and false otherwise.

# A string is palindromic if it reads the same forward and backward.
