# helper function to convert binary to decimal
def binToDec(s):
    res = 0
    exp = 0
    for i in reversed(s):
        if i == '1':
            res += pow(2, exp)
        exp+=1
    return res

def addBinary(a, b):
    """
    :type a: str
    :type b: str
    :rtype: str
    """
    # case: both a and b are "0"
    if a == "0" and b == "0":
        return "0"
    # convert a and b to decimal
    num_a = binToDec(a)
    num_b = binToDec(b)
    # sum
    a_plus_b = num_a+num_b
    # convert decimal to binary
    res_b = ""
    while(a_plus_b > 0):
        res_b = str(a_plus_b % 2) + res_b
        a_plus_b /= 2
    
    return res_b
        
a = "1010"
b = "1011"

print(addBinary(a,b))

'''
Given two binary strings a and b, return their sum as a binary string.
'''
