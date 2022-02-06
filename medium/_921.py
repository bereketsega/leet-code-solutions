
def minAddToMakeValid(s):
    """
    :type s: str
    :rtype: int
    """
    
    emptyCount = openPCount = 0 
    
    for c in s:
        # increment open parentheses 
        if c == '(':
            openPCount+=1
        else:
            # decrement open parentheses for matching ')'
            if openPCount > 0:
                openPCount-=1
            # count failed decrement operations
            else:
                emptyCount+=1
                
    return emptyCount + openPCount

s = "())"

print(minAddToMakeValid(s))

'''
A parentheses string is valid if and only if:

    It is the empty string,
    It can be written as AB (A concatenated with B), where A and B are valid strings, or
    It can be written as (A), where A is a valid string.

You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

    For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".

Return the minimum number of moves required to make s valid.
'''
