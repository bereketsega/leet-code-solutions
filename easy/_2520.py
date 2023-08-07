def countDigits(num: int) -> int:
    dividerCounter=0
    origNum = num
    while num > 0:
        digit = num%10
        if origNum % digit == 0: dividerCounter+=1
        num//=10

    return dividerCounter


print(countDigits(48)) # Expected: 2

'''
Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.
'''
